

#include <stdio.h>

int main(void)

{

	int x,y;

	x=1; 

	//printf("%i", x);
	y=x;
	printf("%i\n", y); 

	y=++x;
	printf("%i\n", y); 


	printf("%i\n", x);

	y+=x;
	printf("%i\n", y);
	printf("%i\n",x);
	
	return 0;



}
