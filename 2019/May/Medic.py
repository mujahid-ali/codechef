#!/bin/python3.6

t = int(input())

while t > 0:
    t-=1	 
    string = str(input())
    arr = string.split(":")
    year = int(arr[0])
    month = int(arr[1])
    date = int(arr[2])
    leap = True
    #print(array[0])2019:06:01
    
    if (year %4 == 0 and year % 100 != 0) or (year % 400 == 0): 
        #print("leap")
        leap = False
        if(month == 2):
            if( date % 2 == 0 ):
                date = 29 - date
                date = date / 2
                print(int(date + 1))
            else:
                date = 29 - date
                date = date /2
                print(int(date + 1))
       		    

    if (month == 4 or  month == 6 or month == 9 or month == 11 ):
        if date %2 == 0: 
            date = 61 - date
            date = date / 2
            print(int(date + 1))
        else:
            date = 61 -date
            date = date/2
            print(int(date + 1))  
            
    if(month == 2 and leap ) :
        if(date % 2 == 0):
            date = 59 - date
            date = date /2
            print(int(date + 1))
        else:
            date = 59 - date
            date = date/2
            print(int(date +1))
            
    if(month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12):
        if date%2 == 0:
            date = 31 - date
            date = date / 2
            print(int(date + 1))
        else:
            date = 31 -date
            date = date /2  
            print(int(date + 1))
