#include <stdio.h>

int main(void){
    int a[5] = {50, 99, 3490, 3, 1};
    int *p;

    p = a;
    while (*p > 0){
        printf("%i\n", *p);
        p++; /* go to the next int in memory */
    }
    
    return 0;
}