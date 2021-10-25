//Make a program that takes two integer values from the user, and checks to see if the first is divisible by the second
//Ashlyn Hanks
//Exercise 2


#include <stdio.h>
int main()

{
	int a,b;
	printf("Please enter first integer:");
	scanf("%i", &a);
	
	printf("Please enter second integer:");
	scanf("%i", &b);
	
	if(a%b==0)
	{
	    printf("The program worked!\n");
	}
	else
	{
	    printf("The program didn't work\n");
	}





	return 0;
}
