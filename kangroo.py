#!/bin/python

import sys

def kangaroo(x1, v1, x2, v2):
    x=x1-x2
    v=v2-v1
    if v2>=v1:
        return "NO";
    elif x%v==0 and x/v>0:
        return "YES"
    else:
        return "NO"
    # Complete this function

x1, v1, x2, v2 = raw_input().strip().split(' ')
x1, v1, x2, v2 = [int(x1), int(v1), int(x2), int(v2)]
result = kangaroo(x1, v1, x2, v2)
print(result)