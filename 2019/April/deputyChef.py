#!/bin/python

t=int(input())


while t>0:
    t= t-1
    n=int(input())
    a=list(map(int,input().split()))
    d=list(map(int,input().split()))
    die = True 
    i=1
    j=0
    defense = 0
    while i < n-1:
        #if i != n-1: 
        if (a[i-1] + a[i+1]) < d[i]:
            die = False
            if defense < d[i]:
            #j=i
                defense = d[i]
            
        i += 1
    
    if (a[0] + a[n-2]) < d[n-1]:
        die = False
        if defense < d[n-1]:
            defense = d[n-1]
         
        
    if (a[1] + a[n-1]) < d[0]:
        die = False
        if defense < d[0]:
            defense = d[0]
                 
    
        
    #print(d[j])    
    if die:
        print(-1)
    else:
        print(defense) 		       
            	
																																																																																																																																																																																																																																																																																																																																																																		
	
	
		
	   
