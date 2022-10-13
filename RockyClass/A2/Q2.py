#11120428,侯嘉韋
def testNumber():
    problem = [6,28,75,2022]
    
    for j in range(0,4):
        p = problem[j]
        for i in range(2,15):
            G = 0
            x = p/(2**(i-1))/(2**i -1)
            if x == 1.0:
                print(p,"is a p-number")
                G = 1
                break
        if G == 0:
            print(p,"is not a p-number")
    exit()

#----------main()----------
while True:
    testNumber()