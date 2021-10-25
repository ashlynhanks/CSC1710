

#include <stdio.h>
int main()

{
	int num1=0, num2=0;
	char oper;
	
	printf("Please provide a number, an operator, and another number:\n");
	scanf("%i %c %i", &num1, &oper, &num2);

	switch (oper)
	{
		case '+':
		     num1+num2;
		     printf("%i + %i = %i\n", num1, num2, num1+num2);
		     break;
		case '-':
		     num1-num2;
		     printf("%i - %i = %i\n", num1, num2, num1-num2);
		     break;
		default:
		     printf("Invalid operator, try again\n");
		     break;
	}

	return 0;
}
