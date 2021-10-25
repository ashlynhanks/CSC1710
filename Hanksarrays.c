//Ashlyn Hanks
//Dr. Pittman 
//home/student/ahanks/csc1710/lab9


#include <stdio.h>
int main()

{
	int num[100], count=0, i, inc=1, temp, num;
	char names[100][16];


	scanf("%i", &num);
	for (i=0; i<num; i++)
	
	    scanf("%s", names[i]);
	
	printf("Array of Names:\n");
	


	for (i=0; i<num; i++)
	    printf("Names[%i] = %s\n", i, names[i]);


	while(scanf("%i", &num [count++] != EOF);

	count--;

	

	printf("Origional Array:\n");

	for(i=0; i<count; i++);
	    printf("x[%i] = %i\n", i, num[i]);


	temp = num[0];
	num[0] = num[count-1]; 
	num[count-1] = temp;
	
	printf("Swapped first and last elements: \n");

	for (i=0; i<count; i++)
	    printf("x[%i] = %i\n", i, num[i]);


	for (i=1; i<(count/2); i++)
	{
	    temp = num[1];
	    num[1] = num[count-inc];
	    num[count-inc] = temp;
	    inc++;
	
	    printf("x[%i] = %i\n", i, num[i]);
	}

} 		
