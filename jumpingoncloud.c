#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int jumpingOnClouds(int c_size, int* c) {
    
    int i=0,ju=0;
    for(i=0;i<c_size-1;){
        if(i+2<c_size &&c[i+2]==0){
            ju++;
            i=i+2;
        }
        else 
        { 
          ju++;
          i=i+1;
        }
        
        
    }
    return ju;
    
    
    
    
    // Complete this function
}

int main() {
    int n; 
    scanf("%i", &n);
    int *c = malloc(sizeof(int) * n);
    for (int c_i = 0; c_i < n; c_i++) {
       scanf("%i",&c[c_i]);
    }
    int result = jumpingOnClouds(n, c);
    printf("%d\n", result);
    return 0;
}
