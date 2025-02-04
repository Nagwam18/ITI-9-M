import Registration as Rg
import login as lg
import projects as p

def console_app(user_press):
    if user_press == 1:
        Rg.registration_fun()
    elif user_press == 2:
        lg.login_fun()
    elif user_press == 3:
        print("1. Create a project\n"
              "2.View all projects\n"
              "3.Edit a project\n"
              "4.Delete a project\n")

        choice = int(input("Please choose an action "))
        user_email = input("Enter your email to continue ")

        if choice == 1:
            title = input("Enter project title: ")
            details = input("Enter project details: ")
            target = float(input("Enter target amount"))
            start_time = input("Enter start date like-->YYYY-MM-DD ")
            end_time = input("Enter end date like-->YYYY-MM-DD ")
            p.create_project(title, details, target, start_time, end_time, user_email)

        elif choice == 2:
            p.view_projects()

        elif choice == 3:
            title = input("Enter project title to edit ")
            new_details = input("Enter new details ")
            new_target = float(input("Enter new target amount "))
            new_start_time = input("Enter new start date like-->YYYY-MM-DD ")
            new_end_time = input("Enter new end date like-->YYYY-MM-DD ")
            p.edit_project(title, new_details, new_target, new_start_time, new_end_time, user_email)

        elif choice == 4:
            title = input("Enter project title to delete: ")
            p.delete_project(title, user_email)
        else:
            print("Invalid input")

if __name__ == "__main__":
    print("For Registration  press 1 \n")
    print("For Login Please  2 \n")
    print("For Projects Please  3 \n")
    try:
        u_press = int(input("Enter Your Choice ").strip())
        console_app(u_press)
    except ValueError:
        print("Invalid input")
