//Ashlyn Hanks
//Exercise 3
//take two integer values, divide them 

#include <stdio.h>
int main()

{

	float a,b;
	
	printf("Please enter the first number:\n");
	scanf("%f", &a);
	
	printf("Please enter the second number:\n");
	scanf("%f", &b);
	
	if(a/b!=0)
	{
	    printf("%f divided by %f = %f\n", a, b, (a/b));
	}
	else 
	{
	    printf("The numbers entered did not work, try again.\n");
	}
	return 0;
}
