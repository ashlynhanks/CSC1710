#include <stdio.h>

int SumNumbers (int x, int y); {
    int c;
    c = x + y;
    return c;
}

int main ()
{

    int array [] = {1,2,3,4,5};
    int x, y, sum;
    int i;


    for(i = 0; i<4; i++)
    {
        x = array[i];
	y = array[i+1];
	sum = SumNumbers(x, y);
	printf("%i + %i = %i\n", x, y, sum);
    }
    
}
