#!/bin/python

import sys

def climbingLeaderboard(scores, alice):
   
    for i in range(0,len(alice)):
        s=list(set(scores))
        s.append(alice[i]) 
        s.sort(reverse=True)
        print(s.index(alice[i])+1)
        
    
    
    

if __name__ == "__main__":
    n = int(raw_input().strip())
    scores = map(int, raw_input().strip().split(' '))
    m = int(raw_input().strip())
    alice = map(int, raw_input().strip().split(' '))
    climbingLeaderboard(scores, alice)
    

