#11120428,侯嘉韋
def add2n():
    y = []
    flag = 0
    for j in range(0,9):
        n = int(j+1)
        x = 0
        for i in range(0,2*n):
            x += 1/n
        print("The Result of ",n,":",x)
        if int(x) != 2 :
            flag += 1
            y.append(n)
            
    print("The Following numbers do not give a value of 2 :",end = " ")
    for k in range(0,flag):
        print(y[k],end = " ")
    print("\n")
    exit()
    
#main function:
while 1:
    add2n()