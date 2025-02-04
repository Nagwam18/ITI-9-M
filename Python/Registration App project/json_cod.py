import json
#users
user_data = "data_usr.json"

def load_user_data():
    try:
        with open(user_data, "r") as file:
            return json.load(file)
    except FileNotFoundError:
        return {"user_data": []}
    except json.JSONDecodeError:
        print("Error reading JSON file. Initializing empty data.")
        return {"user_data": []}

def save_user_data(data):
    try:
        with open(user_data, "w") as file:
            json.dump(data, file, indent=4)
    except Exception as e:
        print(f"Error saving data: {e}")

#projects
projects_d = 'project_data.json'

def load_projects_data():
    try:
        with open(projects_d, "r") as f:  # Use the same file variable here
            data = json.load(f)
            if not isinstance(data, dict):
                raise ValueError("Loaded data is not a dictionary")
            return data
    except Exception as e:
        print(f"Error loading project data: {e}")
        return {"projects": []}

def save_projects_data(projects):
    try:
        with open(projects_d, "w") as file:  # Ensure this points to the correct file
            json.dump(projects, file, indent=4)
    except Exception as e:
        print(f"Error in saving projects: {e}")
