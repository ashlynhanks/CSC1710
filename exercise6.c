//Ashlyn Hanks
//Chapter 4 Exercise 6


#include <stdio.h>

int main()
	
{
	int n, triangularNumber;
	
	triangularNumber=0;
	
	for(n=1;n<=200;n=n+1)

	triangularNumber = triangularNumber+n;
	
	printf("%-2i                %i\n", n, triangularNumber);
	printf("The 200th triangular number is %i\n", triangularNumber);
	
	return 0;
}
