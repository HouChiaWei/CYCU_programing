#11120428,侯嘉韋
import random

answer = float(random.randint(0,100))
print("Welcome to the number-guessing game.")
x = float(input("Please guess a number between 0 and 100, inclusive. "))

while (True):
    if(x == answer):
        print("\nYour guess is correct!!")
        break
    elif(x <= 100 and x > answer):
        x = float(input("\nYour guess is too high!\nPLease guess a number between 0 and 100, inclusive.\nIf you want to quit, enter a number outside the range. "))
    elif(x >= 0 and x < answer):
        x = float(input("\nYour guess is too low!\nPLease guess a number between 0 and 100, inclusive.\nIf you want to quit, enter a number outside the range. "))
    else:
        print("\nReceived an out of range number\nRunning program exit.")
        exit()