#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int squares(int a, int b) {
    // Complete this function
    int i,intv,c=0;
    float fv;
    for(i=a;i<=b;i++){
        fv=sqrt(i);
        intv=fv;
        if(intv==fv)
          c++;  
        
    }
    return c;
    
}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        int a; 
        int b; 
        scanf("%i %i", &a, &b);
        int result = squares(a, b);
        printf("%d\n", result);
    }
    return 0;
}
