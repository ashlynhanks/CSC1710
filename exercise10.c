//Ashlyn Hanks
//Chapter 4 Exercise 10


#include <stdio.h>

int main()

{
	int number, right_digit;
	
	printf("Enter your number. \n");
	scanf("%i", &number);
	
	while (number !=0)
	{
	right_digit = number %10;
	printf("%i", right_digit);
	number=number/10;
	}
	
	printf("\n");
	
	return 0;
}