// ashlyn hanks

#include <stdio.h>
int main()

{
	int a,b, c=1;
	
	printf("Enter number to be factorialed: \n");
	scanf ("%i", &a);
	
	for (b=1; b<=a; b++)
	{
	c *=b;
	}
	printf("%i\n", c);
	

}
