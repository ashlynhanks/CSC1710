/*
Name: Ashlyn Hanks
Date: 8-29-2019
Class: Csc1710
Location: home/student/ahanks/bills.c
*/

#include <stdio.h>

int main (void)

{
    int bills20;
    printf("Enter number of $20 bills - \n");
    scanf("%i", &bills20);
    int product1 = bills20*20;

    int bills10;
    printf("Enter number of $10 bills - \n");
    scanf("%i", &bills10);
    int product2 = bills10*10;

    int bills5;
    printf("Enter number of $5 bills - \n");
    scanf("%i", &bills5);
    int product3 = bills5*5;

    int bills1;
    printf("Enter number of $1 bills - \n");
    scanf("%i", &bills1);
    int product4 = bills1*1;

    int sum;
    sum = product1 + product2 + product3 + product4;

    printf("The total amount made is %i", sum); 

    return 0;

}
