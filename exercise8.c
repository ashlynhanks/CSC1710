//Ashlyn Hanks
//Exercise 8


#include <stdio.h>

int main(void)

{
	int n, number, triangularNumber, counter, y;
	
	printf("How many triangular numbers do you want calculated?\n");
	scanf("%i", &y);
	
	for (counter=1; counter <=y; ++ counter)
	{
	printf("What triangular number do you want?\n");
	scanf("%i", &number);

	triangularNumber=0;
	
	for (n=1; n<=number; ++n)
		triangularNumber+=n;

	printf("Triangular number %i is %i\n\n", number, triangularNumber);
	}



	return 0;
}
