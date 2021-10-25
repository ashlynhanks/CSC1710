#include<stdio.h>
int main()
{
    int n = 50, x;
    int *ptr;

    ptr = &n; 

    printf("%p\n", ptr);

    x = *ptr;
    printf("%i\n", x);

}
