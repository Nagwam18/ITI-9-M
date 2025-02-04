import user_functions as f
from json_cod import load_user_data ,save_user_data

def registration_fun():
    users = load_user_data()
    email = input("Enter your email: ").strip()
    f.check_mail(email)
    for us in users["user_data"]:
        if isinstance(us, dict):
            if us["email"] == email:
                print("This email is already registered!")
                return
    first_name_input = input("Enter your first name: ").strip()
    f.first_name(first_name_input)

    last_name_input = input("Enter your last name: ").strip()
    f.last_name(last_name_input)

    phone_input = input("Enter your phone number: ").strip()
    if not f.val_phone(phone_input):
        while True:
            print("Invalid phone number😆")
            phone_input = input("RE enter your phone number:🤔 ").strip()
            if  f.val_phone(phone_input):
                break

    password = input("Enter your password:🙈 ").strip()
    if not f.check_valPasswd(password):
        while True:
            print("Invalid password😒")
            password = input("RE enter your password 🙄").strip()
            if  f.check_valPasswd(password):
                break

    confirm_password = input("Confirm your password: ").strip()
    if not f.match_passwd(password, confirm_password):
        while True:
            print("Password un matched 🤔🙊")
            confirm_password = input("Re Confirm your password:🙉 ").strip()
            if f.match_passwd(password,confirm_password):
                break



    new_user = {
        "email": email,
        "first_name": first_name_input,

        "last_name": last_name_input,
        "phone": phone_input,
        "password": password
    }

    users.setdefault("user_data", []).append(new_user)
    save_user_data(users)
    print("Registration successful!")
