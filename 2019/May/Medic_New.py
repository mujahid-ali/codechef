#!/bin/python3.6

t = int(input())

while t > 0:
    t-=1	 
    string = str(input())
    arr = string.split(":")
    year = int(arr[0])
    month = int(arr[1])
    date = int(arr[2])
    leap = False
    
    if (year %4 == 0 and year % 100 != 0) or (year % 400 == 0): 
        #print("leap")
        leap = True
    if(month == 2):
        if leap:
            date = ((29 -date)/2 +1)
            print(int(date))
        else:
            date = ((59 - date) / 2 +1)
            print(int(date))     

    if (month == 4 or  month == 6 or month == 9 or month == 11 ):
        date = ((61 - date) /2 +1)
        print(int(date))
        
    if(month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12):
        date = ((31-date)/2 +1)
        print(int(date))
