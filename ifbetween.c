
#include <stdio.h>

int main()

{
	int num;
	
	printf("Enter a number:");
	scanf("%i", &num);
	if((num>=1 && num<=20) || (num>=50 && num<= 75))
	{
	  printf("The number is in the range\n");
		
	if(num%2 ==0)
	  {
	  printf("The number is also even\n");
	  }
	
	}
	
	else
	{
	  printf("The number is not in the range\n");
	}


}
