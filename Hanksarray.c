//Ashlyn Hanks
//Dr. Pittman 
//home/student/ahanks/csc1710/lab9

#include <stdio.h>
int main()

{
//Collect initial numbers for array
	int i, a=0, temp, last, numelements;
	char names[100][16];
	
	printf("How many elements would you like to have in the array?\n");
	scanf("%i", &numelements);

	int num[numelements];

	printf("Please enter elements for the array:\n");

	
	for(i=0; i<numelements; i++)
	{
		scanf("%d", &num[i]);
	}

//Print off original array
	printf("Original array: \n");
	
	for(i=0; i<numelements; i++)
	{	
		printf(" x[%i] = %i\n", i, num[i]);
 
		
	}
//Swap first and last elements in array 
	printf("Swap the first and last elements:\n");
	for(i=0; i<1; i++)
	{	
	    for(int l=0; l<numelements; l++)
	    {	
		temp=num[0];
		num[0]=num[l-1];
		num[l-1]=temp;
		temp = last;	
	
		for (l=0; l<numelements; l++)
		{
	    	printf("x{%i} = %i\n", l, num[l]);
		}
   	    }
	}

//Reset array
	
	for(int i=0; i<numelements; i++)
	printf("x[%i] = %i\n", i, num[i]);


//Reverse the elements in the array and flip them
/*	printf("After reversing the elements the array is:\n");
	int d, b[numelements];
	
	for(i = numelements - 1, d=0; i>=0; i--, d++)
	{
	    b[d]=num[i];
	    printf(" x[%i] = %i\n", i, num[i]);
	}
	
*/
}
