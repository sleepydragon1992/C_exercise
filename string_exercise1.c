#include <stdio.h>

int main (void){
    char *s = "Hello!";

    printf("%s\n", s);
    printf("%c\n", *s);
    printf("%c\n", s[0]);

    return 0;
}