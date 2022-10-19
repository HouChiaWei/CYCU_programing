#11120428,侯嘉韋
def sumSeries(n,r):
    # n->integer and >0 , r->integer
    result = int(1)
    for i in range(1,n+1):
        result += i*r**i # <- i can't be n <--        
        #print(result) test ->    eroor in   |
    return result

#-----main-----
print("n = 1, r = 2: ", sumSeries(1,2))
print("n = 5, r = 5: ", sumSeries(5,5))
print("n = 5, r = -2: ", sumSeries(5,-2))