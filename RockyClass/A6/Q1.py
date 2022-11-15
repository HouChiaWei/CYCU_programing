# 11120428,侯嘉韋
# Problem : Print username.
# Solution : useing "string.format" -> print(f'~~~{item[cell one:cell n]}').
def main():
    #input first name
    fst = str(input("Please enter your first name (all lowercase): "))
    #input last name
    lst = str(input("Please enter your last name (all lowercase): "))
    #output the result
    print(f"Your username is:{fst[0]}{lst[0:7]}")
#------------main-------------
print("This program generates computer usernames.\n")
main()