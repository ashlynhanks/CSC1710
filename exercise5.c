//Ashlyn Hanks
//Exercise 5


#include <stdio.h>
int main(void)

{

	int n, ntwo;

	printf("TABLE OF POWERS OF TWO\n\n");
	printf("n             n squared\n");
	printf("--            --------\n");

	ntwo=1;
	
	for (n=0; n<=10; ++n)
	{
	printf("%i            %i       \n", n, n*n);

	}


	return 0;
}
