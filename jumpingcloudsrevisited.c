#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int n; 
    int k; 
    scanf("%i %i", &n, &k);
    int *c = malloc(sizeof(int) * n);
    for (int c_i = 0; c_i < n; c_i++) {
       scanf("%i",&c[c_i]);
    }
    int i=0,energy=100;
    for(i=0; ;){
        if(c[i]==0){
            energy=energy-1;}
        else{
            energy=energy-3;}
        i=(i+k)%n;
        if(i==0)  
            break;
    }
    
   printf("%d", energy); 
    return 0;
}
