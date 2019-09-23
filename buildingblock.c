#include <stdio.h>

int main (void){
    int i;
    int j=0;
    printf("please enter number i: ");
    scanf ("%d", &i);
    while (i>0){
        for (j=1;j<i;j++){
            printf("%d \n",j);
        }
        printf("enter value of i again \n");
        scanf("%d", &i);

        }
    return 0;
    }

