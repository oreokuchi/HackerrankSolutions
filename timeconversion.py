#!/bin/python

import sys

def timeConversion(s):
    # Complete this function
    h,m,se=s.split(":")
    h=int(h)
   
    if s[-2:]=="AM":
        if(h==12):
            return "00"+s[2:8]
        else:    
            return s[:-2]   
    else:
        if(h==12):
            return s[:-2]
        else:
            
            return str(int(s[:2]) + 12) + s[2:8]
            
           
    
    
      
        
s = raw_input().strip()

result = timeConversion(s)
print(result)
