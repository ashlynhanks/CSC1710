#include <stdio.h>

int Fibonacci(int n);

int Fibonacci(int n)
{
	if(n==0)
	    return 0;
	else if (n==1)
	    return 1;

	else 
	    return (Fibonacci(n-1)+Fibonacci(n-2));
}




void main(){
	int i, c=0, num;

	printf("How many digits  would you like to display?\n");
	scanf("%i", &num);

	for (i=0; i<=num;i++)
	{
		printf("%i\n", Fibonacci(c));
		c++;
	}
}
