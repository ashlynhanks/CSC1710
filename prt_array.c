#include <stdio.h>

int main()
{
    /*
 *prints memory address of the array
 * int arr[5] = {1,2,3,4,5 };
    int *ptr = arr; 

    printf("%p\n", ptr);
*/

    int *p;
    int (*ptr)[5];
    int arr[5];

    ptr = &arr; 
    printf("p = %p\nptr = %p\n", p, ptr);

    p++;
    ptr++;

    printf("p = %p\nptr = %p\n", p, ptr);

}
