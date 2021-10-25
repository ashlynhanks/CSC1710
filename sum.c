//Ashlyn Hanks


#include <stdio.h>
int main(void) 


/* get list of four intigers from user 
 * break apart intigers
 * add four intigers 
 * print result of the sum 
 *
 */ 


{
	int int1, int2, int3, int4;
	printf("Enter an integer: \n"); 
	scanf("%i", &int1);
	printf("Enter an integer:\n");
	scanf("%i", &int2);
	printf("Enter an integer: \n");
	scanf("%i", &int3);
	printf("Enter an integer: \n");
	scanf("%i", &int4);
	
	int sum=int1+int2+int3+int4;
	sum +=1;	
	printf("The sum is %i\n", sum);

	return 0;




}
