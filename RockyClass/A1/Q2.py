#11120428,侯嘉韋
def main():
    n = eval(input("Enter an odd integer for this game >> "))

    if n%2 == 0:
        print("-----Error-----You need to enter an 'odd integer'-----")
        print("-----Please restart the program-----")
        exit()
    
    x = eval(input("Round 1.\nYour turn ! \n Please enter an uncalled integer between 0 and "+str(n)+" inclusive >> "))
    
    flag = 1
    
    while x >= 0:
        
        print("The Result : ",n-x)
        
        if flag > n/2:
            print("\nNo number left.")
            break
        flag += 1
        
        print("Round ",flag,".")
        x = eval(input("Your turn ! \n Please enter an uncalled integer between 0 and "+str(n)+" inclusive >> "))
        
    print("Thank you for using this program ~ ~ ~")

'''------------------------'''

print("----- Welcome to this mini programing game ------\n")
main()
