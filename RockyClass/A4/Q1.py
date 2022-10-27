# 11120428,侯嘉韋
def conversion(m):
    while 0 <= m and m <= 100:
        if 75 < m and m <= 100:
            print("Score ",m," --> ","# A")
            break
        if 60 < m  and m <= 75:
            print("Score ",m," --> ","# B")
            break
        if 45 < m and m <= 60:
            print("Score ",m," --> ","# C")
            break
        else:
            print("Score ",m," --> ","# D")
            break
#----------main-----------
conversion(0)
conversion(10)
conversion(60)
conversion(65)
conversion(75)
conversion(100)