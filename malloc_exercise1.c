#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){ 
    int *p; 
    p = malloc(sizeof(int) * 12);

    if (p == NULL){
        printf("Horsefeathers! We're probably out of memory!\n");
        exit(1);
    }
}