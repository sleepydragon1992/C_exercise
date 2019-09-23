#include <stdio.h>
#include <math.h>

struct stuff {
    int val;
    float b;
};

int main (void){
    struct stuff s;
    s.val = 3490;
    s.b = 3.14159;
    
    printf("The val field in s is: %d\n", s.val);

    return 0;
}
