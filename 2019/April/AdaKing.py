#!/bin/python3.6


t= int(input())

while t>0:
    t= t-1
    R,C,K = [int(x) for x in input().split()]
    if (R-K) < 1:
        r1 = 1
    else:
        r1 = R-K
    if (R+K) > 8:        
        r2 = 8
    else:
        r2 = R + K
        
    if (C - K) < 1:
        c1 = 1
    else:
        c1 = C - K
    if (C + K) > 8:
        c2 = 8
    else:
        c2 = C + K 
        
    ans = (r2-r1 +1) * (c2 - c1 +1)
    print(ans)    
