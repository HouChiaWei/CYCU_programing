# 11120428,侯嘉韋
# Problem : Printing a tree.
# Solution : useing "nested loop" + "2i-1" mathematical relationship.
# Limits : (1).Include the code.
#          (2).Ask a user for a symbol and a positive position for the tip of a tree.
#          (3).Print a pyramid shape.
def main():
    a = str(input("Please enter a symbol: "))
    n = int(input("Please enter a positive position of the symbol on the first line:　"))
    for i in range(0,n+1):
        for j in range(i,n):      # output the fore " " 
            print(" ",end = "") 
        for k in range(0,2*i-1):  # output the pyramid shape symbols
            print(a,end = "")
        print()
#------------main-------------
main()