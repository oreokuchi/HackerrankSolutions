#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int findDigits(int n) {
    int temp,c=0,digit;
    temp = n;
    while (n > 0)
    {
        digit = n % 10;
        if(digit!=0    )
        {  if(temp%digit==0)
            c++;
        }
        n /= 10;
    }
 return c;  
    
}

int main() {
    int t; 
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%i", &n);
        int result = findDigits(n);
        printf("%d\n", result);
    }
    return 0;
}
