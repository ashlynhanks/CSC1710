#include <stdio.h>

int addNumbers(int x, int y)
{
	int sum;
	sum = x+y;

	return sum;
}

int main(void)

{

	int x, y, sum; 

	printf("Please enter two values:\n");
	scanf("%i %i", &x, &y);

	sum = addNumber(x,y);
	
	printf("%i\n", sum);
}
