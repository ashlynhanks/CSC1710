#include <stdio.h>
#include <stdbool.h>

void main()
{

	bool isPresent = false;
	int i, j, n=10, val;

	int x[5] = {61, 32, 16, 24, 79};


	scanf("%i", &val); 

	for(i=0; !isPresent && i <n; i++)
	{
	    if (x[i] == val)
	        isPresent = true;
		
	}
	
}
