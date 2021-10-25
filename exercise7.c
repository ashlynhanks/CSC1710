//Ashlyn Hanks
//Exercise 7


#include <stdio.h>

int main()

{
	int dollars, cents, count;
	
	for (count = 1; count<=10; ++count)
	{
	printf("Enter dollars: \n");
	scanf("%i", &dollars);

	printf("Enter cents: \n");
	scanf("%i", &cents);
	
	printf("$ %i.%i\n\n", dollars, cents);
	}





	return 0;
}
