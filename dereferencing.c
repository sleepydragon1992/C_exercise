#include <stdio.h>

int main (void)
{
    int i = 0;
    int *p ; 
    //printf("value of p is %ls and p point to: %d \n", p, *p);
    p = &i;
   // printf("value of p is %ls and p point to %d",p, *p);
    i = 10;
    printf(" i = %d \n",i);
    *p = 20;
    printf(" i = %d \n",*p);
}