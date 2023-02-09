#!/usr/bin/python3
"""program that finds the first number of teaspoons that will make a cake too sweet"""

def isTooSweet(i):
    if i > n:
        return True
    else:
        return False

def find_x(n):
    low = 0
    high = n
    while low <= high:
        mid = (low + high) // 2
        if isTooSweet(mid):
            high = mid - 1
        else:
            low = mid + 1
    return low

n = 10 # Number of teaspoons of sugar required by the recipe
x = find_x(n)
print("The first number of teaspoons that will make the cake too sweet:", x)
