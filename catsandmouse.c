#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void catAndMouse(int x, int y, int z, int *result_size) {
    // Complete this function
    if(abs(z-y)<abs(z-x)){
        printf("Cat B\n");
    }
    else if(abs(z-x)<abs(z-y)){
        printf("Cat A\n");
        
    }
    else if(abs(z-x)==abs(z-y)){
        printf("Mouse C\n");
    }
    else{
        
    }
}

int main() {
    int q; 
    scanf("%i", &q);
    for(int a0 = 0; a0 < q; a0++){
        int x; 
        int y; 
        int z; 
        scanf("%i %i %i", &x, &y, &z);
        int result_size;
         catAndMouse(x, y, z, &result_size);
        
        //puts("");


    }
    return 0;
}