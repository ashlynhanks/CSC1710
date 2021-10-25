#include <stdio.h>

int FindLarger(int a, int b);
int FindSmaller(int a, int b);

int main(void)
{
	int n;

		
	n = FindLarger(10,11);
	printf("%i\n", n);

	n= FindSmaller(10,11);
	printf("%i\n", n); 
}

int FindLarger(int a, int b)
{
	int larger;
	
        if(a>b)
        larger = a;

        if (b>a)
        larger = b;

        return larger;
}

int FindSmaller(int a, int b)
{
	int smaller;
	
	if(a<b)
	smaller = a;

	if (b<a)
	smaller = b;

	return smaller;
}



