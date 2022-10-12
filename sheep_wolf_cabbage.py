'''
total: 7 times.

No.1 : sheep  -> 
No.2 :        <- NULL
No.3 : cabbage   
         or   ->
        wolf
No.4 :        <- sheep
No.5 : cabbage   
         or   ->
        wolf
N0.6 :        <- NULL
No.7 : sheep  ->

Compelete !

'''
#total: 15 times

flag = 0
boat_space = 2
object = 4 # bull,rhino,goat,cabbage
boat_driver = 2 # man,ape

      # man,ape,bull,rhino,goat,cabbage
east = [ 1 , 1 , 1 , 1 , 1 , 1 ]
west = [ 0 , 0 , 0 , 0 , 0 , 0 ]
sum_west = 0

while west != object+boat_driver :
    
    for i in west :
        sum_west += i

    if sum_west == 6:
        print("Compelete !")
        print("Total :",flag," times.\n")
        break 
    
    