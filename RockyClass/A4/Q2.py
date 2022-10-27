# 11120428,侯嘉韋
# Hanoi Tower Problem Soving Program
# Limits : (1).Move all the disks from A to C
#          (2).Input the codes from question requirements
#          (3).Print out each move on a new line,
def hanoi(disks,Atower,Btower,Ctower):
    if disks == 1:
        return [(Atower,Btower)]
    else:
        return hanoi(disks-1,Atower,Ctower,Btower) + hanoi(1,Atower,Btower,Ctower) + hanoi(disks-1,Ctower,Btower,Atower)
        
#------------main-------------
for n in range(1,11):
    print("The number of disks is:%2d"%n)  #%d -> %variable
    print("----------------------------------") #to segment disk moves

    count = 0 #count the moves number
    
    for m in hanoi(n, 'A', 'B', 'C'):
        count += 1
        print("Move one disk from %c to %c" %m)  #%m -> key the array's value to two %c
    print("----------------------------------")
    print("The number of moves is:",count)
    print()