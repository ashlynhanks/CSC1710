#include <stdio.h>
int main()

{
	int a,b;
	
	printf("Enter a number: \n");
	scanf("%i", &a);
	
	printf("Enter a number: \n");
	scanf("%i", &b);
	
		
	for(a; a<=15, a++;)
	{
	if(a>b+a)
	{
	
	  printf("It worked!\n");
	
	}
	else
	{
	  printf("It didn't work.\n");	
	}
	}
}
