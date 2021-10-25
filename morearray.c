#include <stdio.h>
int main ()

{
	int num[5], i;
	printf("Please provide 5 numbers for an array:\n");
	
	for(i=0; i<5; i++)
	{
	    scanf("%d", &num[i]);
	}


	printf("The array is:\n");
	
	for(i=0; i<5; i++)
	{
	    printf("%d\n", num[i]);
	}





}
