#include <stdio.h>

void increment(int *p){
    *p = *p +1; 
}

int main (void){
    int i = 10;
    printf("i is %d\n", i);
    increment(&i);
    printf("i is %d\n", i);
    return 0;
}