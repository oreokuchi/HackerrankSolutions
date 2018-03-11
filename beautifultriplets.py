#!/bin/python

import sys

def beautifulTriplets(d, arr):
    # Complete this function
    c=0
    for i in range(0,len(arr)):
        for j in range(i+1,len(arr)):
            if(arr[j]-arr[i]==d):
                temp=arr[i]
                for k in range(0,len(arr)):
                    if(temp-arr[k]==d):
                        c=c+1
    return c
if __name__ == "__main__":
    n, d = raw_input().strip().split(' ')
    n, d = [int(n), int(d)]
    arr = map(int, raw_input().strip().split(' '))
    result = beautifulTriplets(d, arr)
    print result
