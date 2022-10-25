# Recursive Python function to solve the tower of hanoi
#目標-->將A的盤子全數移至B(數字大的盤子不能在數字小的盤子上面)

def TowerOfHanoi(n, source, destination, spare):
    if n==1:
        print ("Move 1 disk from source",source,"to destination",destination)
        return
    TowerOfHanoi(n-1, source, spare, destination)
    print ("Move 1 disk from source",source,"to destination",destination)
    TowerOfHanoi(n-1, spare, destination, source)
         
for n in range(1, 5): #盤子總數
    print("The number of discs is:",n)
    TowerOfHanoi(n,'A','B','C')
    print()
