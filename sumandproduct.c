#include <stdio.h>

int main (void){
	int a;
	int b;
	int c;
	int d;
	int e;


	printf("Please enter the numbers: ");
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	scanf ("%d", &d);
	scanf ("%d", &e);
    
    printf ("\n %d \n", a);
    printf ("\n %d \n", b); 

	int sum = a+b+c+d+e;
	int product = a*b*c*d*e;

	printf ("The sum of the numbers is:%d \n" , sum );
	printf ("The product of the numbers is:%d \n" , product);
}