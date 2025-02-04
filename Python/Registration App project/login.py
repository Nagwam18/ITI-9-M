# import json_cod as jc
from json_cod import load_user_data
import json

def login_fun():
    users =load_user_data()
    email = input("Enter your emai 👀").strip()
    password = input("Enter your password 🙈 ").strip()
    for us in users["user_data"]:
        if us["email"]==email and us["password"] ==password:
            print("Login Successful 🎉🎉🎊")
            return
        else:
            print("Login Failed ☹🙁")

