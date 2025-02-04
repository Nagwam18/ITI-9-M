from json_cod import load_projects_data, save_projects_data



def create_project(title, details, target, start_time, end_time, user_email):
    try:
        projects = load_projects_data()
        if isinstance(projects, list):
            projects = {"projects": projects}

        if "projects" not in projects:
            projects["projects"] = []

        new_project = {
            "title": title,
            "details": details,
            "target": target,
            "start_time": start_time,
            "end_time": end_time,
            "user": user_email
        }

        projects["projects"].append(new_project)

        save_projects_data(projects)
        print("Project created successfully✨✔")

    except Exception as e:
        print(f"Error creating project: {e}")


def view_projects():
    try:
        projects = load_projects_data()
        if "projects" not in projects or len(projects["projects"]) == 0:
            print("No projects available😖")
            return
        for p in projects["projects"]:
            print(f"Project title: {p['title']}")
            print(f"Project details: {p['details']}")
            print(f"Project target: {p['target']}")
            print(f"Project start time: {p['start_time']}")
            print(f"Project end time: {p['end_time']}")
            print(f"Project creator: {p['user']}")

    except Exception as e:
        print(f"Error viewing projects: {e}")


def edit_project(title, new_details, new_target, new_start_time, new_end_time, user_email):
    try:
        projects = load_projects_data()
        for project in projects.get("projects", []):
            if project["title"] == title and project["user"] == user_email:
                project["details"] = new_details
                project["target"] = new_target
                project["start_time"] = new_start_time
                project["end_time"] = new_end_time
                save_projects_data(projects)
                print("Project updated successfully")

    except Exception as e:
        print(f"Error editing project: {e}")


def delete_project(title, user_email):
    try:
        projects = load_projects_data()
        for project in projects.get("projects", []):
            if project["title"] == title and project["user"] == user_email:
                projects["projects"].remove(project)
                save_projects_data(projects)
                print("Project deleted successfully.")
                return
        print("Project not found or you are not the creator.")

    except Exception as e:
        print(f"Error deleting project: {e}")
