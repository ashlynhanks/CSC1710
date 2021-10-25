// Ashlyn Hanks
// Exercise 5

#include <stdio.h>
int main()

{

	int number, right_digit;
	
	printf("Please enter a digit:\n");
	scanf("%i", &number);
	printf("Reversed number: \n");
	
	if(number <0)
	{
	   number = -number;
	
	while (number !=0)
	{
	    right_digit = number % 10;
	    number /=10;
	    printf("%i", right_digit);
	}
	
	printf("-\n");
	}
	
	else 
	{
	    while (number !=0)
	    {
		right_digit = number % 10;
		number /= 10;
		printf("%i", right_digit);
	    }
	    printf("\n");
	}
	
	return 0;
}
