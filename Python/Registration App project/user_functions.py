import re

def first_name(fname: str):
    try:
        if len(fname) <= 0 or not fname.isalpha():
            print("Please enter a validated First Name")
            return None
        return fname
    except Exception as e:
        print(f"There is an error occurred in first_name: {e}")
        return None

def last_name(lname: str):
    try:
        if len(lname) <= 0 or not lname.isalpha():
            print("Please enter a validated Last Name")
            return None
        return lname
    except Exception as e:
        print(f"There is an error in last_name: {e}")
        return None

def check_mail(email):
    try:
        regex = r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,7}\b'
        if not re.fullmatch(regex, email):
            print("Invalid Email")
            return False
        print("Valid Email")
        return True
    except Exception as e:
        print(f"There is an error in check_mail: {e}")

def check_valPasswd(password: str):
    try:
        if len(password) <= 8:
            print("Password must be at least 9 characters long.")
        elif not re.search("[a-z]", password):
            print("Password must contain at least one lowercase letter.")
        elif not re.search("[A-Z]", password):
            print("Password must contain at least one uppercase letter.")
        elif not re.search("[0-9]", password):
            print("Password must contain at least one digit.")
        elif not re.search("[_@$]", password):
            print("Password must contain at least one special character (_@$).")
        elif re.search("\s", password):
            print("Password should not contain spaces.")
        else:
            print("Valid Password")
            return password
    except Exception as e:
        print(f"There is an error in check_valPasswd: {e}")


def match_passwd(password:str, confirm_password :str):
    try:
        if password == confirm_password:
            return True
        print("Passwords do not match.")
        return False
    except Exception as e:
        print(f"Error in match_passwd: {e}")
        return False


def val_phone(phone):
    try:
        pattern = re.compile(r'^(\+20|1)?\s*\(?\d{3}\)?[\s.-]?\d{3}[\s.-]?\d{4}$')
        if pattern.match(phone):
            return True
            print("Invalid Egyptian phone number")
        else:
            return False
    except Exception as e:
        print(f"There is an error in val_phone:{e}")

