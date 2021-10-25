//Ashlyn Hanks
//Dr. Pittman
//September 19, 2019
//Home/student/ahanks/csc1710/lab5/HanksForLoops.c


#include <stdio.h>
int main()

{

	//factorial section 
	
	long int fac=1;
	long int x=1;
	long int y;
	long int dfac=1;

	
	printf("Enter number less than 26: \n");
	scanf("%i", &y);	
	//recieve y integer from user, must be less than 26
	

	for(x=1 ; x<=y; x++ )
	{
	//printf("x=%i\n", x);
	fac *= x;
	//printf("factorial = %i\n", fac);
	//loop and factorial y
	}	

	
	for(x=1; x<=y; x+=2 )	
	{
	//printf("x=%i\n", x);
	dfac *=x;
	//double factorial (only odd numbers)
	}


	printf("The Factorial = %li\n", fac);
	printf("The Double Factorial = %li\n", dfac);



	//geometric sequence portion
	
	float r=.5;
	int n;
	float a;
	int t;
	float total;
	float re=1.0;


	printf("Enter desired terms in sum: \n");
	scanf("%i%", &n);

	printf("Enter decimal for geometric sequence to start at: \n");
	scanf("%f", &a); 
	
	for (t=1; t<=n; t++)
	
	re*= r; 

	total = 1-re;
	total = n*total;
	total = total/(1-r);
	
	printf("The sum of the geometric sequence is %f\n", total);	
	 

	
	return 0;



}
