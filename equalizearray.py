#!/bin/python

import sys


def equalizeArray(arr):
    # Complete this function
    ar=list(arr)
    c=0
    m=max(set(ar), key=ar.count)
    for i in range(0,len(ar)):
        if(ar[i]!=m):
            c=c+1
    return c
if __name__ == "__main__":
    n = int(raw_input().strip())
    arr = map(int, raw_input().strip().split(' '))
    result = equalizeArray(arr)
    print result
