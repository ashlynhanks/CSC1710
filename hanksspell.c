//Ashlyn Hanks
//Dr. Pittman 
//home/student/ahanks/csc1710/lab7

#include <stdio.h>
int main ()

{
	int num, rnum=0;
	
	printf("Please enter a number: \n");
	scanf("%i", &num);
	
	if (num <0)
	{
	    num = -num;
	    printf("Negative ");
 	}
	else (num >=0);
	{
	    num = +num;
	   
	}
	while(num !=0)
	{
	    rnum *= 10;
	    rnum += num % 10;
	    num /= 10;
	}
	
	while (rnum != 0)
	{
	    num = rnum % 10;

	    switch (num)
	    {
		case 0:
		    printf("Zero ");
		    break;
		case 1:
		    printf("One ");
		    break;
		case 2:
		    printf("Two ");
		    break;
		case 3:
		    printf("Three ");
		    break;
		case 4:
		    printf("Four ");
		    break;
		case 5:
		    printf("Five ");
		    break;
		case 6:
		    printf("Six ");
		    break;
		case 7:
		    printf("Seven ");
		    break;
		case 8:
		    printf("Eight ");
		    break;
		case 9:
		    printf("Nine ");
		    break;
		default:
		    printf("Not valid\n");
		    break;
	    }
	rnum /=10;
	}
	
	printf("\n");
	
	
	
	return 0;
}
