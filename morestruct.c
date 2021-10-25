#include <stdio.h>
const int CURRENTYEAR = 2019;
struct date 
{
	int month;
	int date;
	int year;
};



struct studentinfo
{
	char last[20], first[16];
	
	struct date bday;
};


int age(struct studentinfo z)
{
	int howold; 
	howold = CURRENTYEAR - z.bday.year; 
	
	return howold;
}

int main()
{
	struct studentinfo swozniak = {"wozniak", "steve", 8, 11, 1950};

	printf("Name: %s %s\n Age %i\n", swozniak.first, swozniak.last, age(swozniak)); 
}
