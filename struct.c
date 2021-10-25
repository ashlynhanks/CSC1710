#include <stdio.h>

/*
typedef struct { double x, double y;} Point;
typedef {double x; double y;} Point;


typedef int Positives; 
*/
//Above is type definition blue prints



struct Student
{
	char grade;
	int id;
	float gpa;



};



int main ()
{
	struct Student jason;
	
	jason.grade = 'a';
	jason.id = 1902934;
	jason.gpa = 4.0;


	struct Student paul;

	paul.grade = 'b';
	paul.id = 287615;
	paul.gpa = 3.134;

	printf(" Jasons grade is %c\n Jasons id is %i\n Jasons GPA is %f\n", jason.grade, jason.id, jason.gpa);
	printf("\n\n Pauls grade is %c\n Pauls id is %i\n Pauls GPA is %f\n", paul.grade, paul.id, paul.gpa);


}
