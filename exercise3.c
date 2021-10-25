//Ashlyn Hanks
//Exercise 4



#include <stdio.h>

int main()

{

	int n;
	int trin;
	printf("N          Triangle Number\n");
	printf("--------------------------\n");

	for (n=5; n<=50; n++)
	{
	trin= n*(n+1);
	trin = trin/2;

	printf("%i                  %i     \n", n,trin);
	}


	return 0;
}
