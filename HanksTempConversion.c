//Ashlyn Hanks
//Dr. Pittman 
//September 26, 2019
//home/student/ahanks/csc1710/lab6/HanksTempConversion.c


#include <stdio.h>
int main()

{
//ask user for starting and ending value for range


	float stval, endval, i=0, c, k, t=(5/9);
	printf("Enter a starting Farenheit value: ");
	scanf("%f", &stval);
	
	printf("Enter a ending Farenheit value: ");
	scanf("%f", &endval);

	printf("Temperature Conversion Table\n");
	printf("----------------------------\n");
	printf("Farenheit   Celsius    Kelvin\n");

//use for loop to find integers between start and end value

	for (i=stval; i<=endval;i++)
	{
	    printf("i = %f\n", i);
	
// calculate each of the conversions(F,C,K)
//use a while loop to loop for table
	   
	    while (i<= endval)
            {
		i++;
		c= ((i-32)*5)/9;
		k= (c+273.15);
		printf("%3f  %3f  %3f\n", i-1,c,k); 
            }  
	
	}
	return 0;
}
