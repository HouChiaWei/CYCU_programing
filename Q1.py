#11120428,侯嘉韋
def sum(x,y):    
    result = 0
    Nextnumber = x
    
    while Nextnumber <= y:
        result += Nextnumber
        Nextnumber += 1

    print("The sum of",x,"and",y," = ",result)
#main function:
    
sum(int(input("Please input x = ")),int(input("Please input y = ")))

    
# Test 
'''
print("x = 1 and y = 10:", end=" ")
sum(1, 10)
print("x = 5 and y = 10:", end=" ")
sum(5, 10)
print("x = -5 and y = 5:", end=" ")
sum(-5, 5)
'''