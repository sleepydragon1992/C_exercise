#include <stdio.h>

int main (){
    int num = 10;
    int * ptr;

    //ptr = &num;
    *ptr = num;
    printf("Address of num = %p\n",&num);
    printf("Value of num = %d\n", num);
    ptr = ptr + 1;
    printf("value of ptr: %p\n ",ptr);
}