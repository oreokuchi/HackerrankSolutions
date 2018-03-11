#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int viralAdvertising(int n) {
    // Complete this function
    int i,adv=6,like=2,a=0;
    for(i=2;i<=n;i++){
        a=floor(adv/2);
        like=like+a;
        adv=a*3;
        
    }
    return like;
    
}

int main() {
    int n; 
    scanf("%i", &n);
    int result = viralAdvertising(n);
    printf("%d\n", result);
    return 0;
}