//Ashlyn Hanks
//print intigers in english 
//exercise 6

#include <stdio.h>

int main()

{
	int num, rnum=0;

	printf("Enter your number: \n");
	scanf("%i", &num);
	
	while (num !=0)
	{
	    rnum *= 10;
	    rnum += num % 10;
	    num /=10;
	}
	
	while (rnum !=0)
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
		    printf("Not valid");
		    break;
	   }
	rnum /=10;
	}
	
	printf("\n");
	
	return 0;
}
