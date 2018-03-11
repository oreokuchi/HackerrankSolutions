#!/bin/python

import sys

def minimumDistances(a):
    # Complete this function
    d=100000
    for i in range(0,len(a)):
        for j in range(i+1,len(a)):
            if(a[i]==a[j]):
                if(j-i<d):
                    d=j-i
    if(d==100000):
        d=-1
    return d            
        

if __name__ == "__main__":
    n = int(raw_input().strip())
    a = map(int, raw_input().strip().split(' '))
    result = minimumDistances(a)
    print result
