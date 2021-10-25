#include <stdio.h>

int FindLarger(int array[2]);
int FindSmaller(int a, int b);

int main (void) 
{
	int array[] = {10,11};
	int n;

	n = FindLarger(array);
	printf("%i\n", n);

	n = FindSmaller(FindLarger(array), FindLarger(array));
	printf("%i\n", n);
}

int FindSmaller(int a, int b)
{
	int smaller;

	if (a<b)
	smaller = a;

	if (b<a)
	smaller = b;
	
	return smaller;
}

int FindLarger(int array[])
{
	int larger;

	if (array[0] > array[1])
	larger = array[0];

	if (array[1] > array[0])
	larger = array[1];

	return larger;
}
