//Ashlyn Hanks 
//Dr. Pittman 
//September 9, 2019
//home/student/csc1710/lab3/weights.c


#include <stdio.h>
int main (void) 

//calculate weighted average of labs, quizes,a program and test
{
// insert lab scores	
	float lab1, lab2, lab3, lab4;
	printf("Enter first Lab Score \n");
	scanf("%f", &lab1);
	printf("Enter second Lab Score \n");
	scanf("%f", &lab2);
	printf("Enter third Lab Score \n");
	scanf("%f", &lab3);
	printf("Enter fourth Lab Score \n");
	scanf("%f", &lab4);
//calculate lab average with weight
	float laverage = lab1+lab2+lab3+lab4;
	float laverage1 = (laverage*0.1);
	float wlaverage = laverage1/4;
	float labw = wlaverage * 10;

//insert quiz scores
	float quiz1, quiz2, quiz3;
	printf("Enter first Quiz Score \n");
	scanf("%f",&quiz1);
	printf("Enter second Quiz Score \n");
	scanf("%f", &quiz2);
	printf("Enter third Quiz Score \n");
	scanf("%f", &quiz3);
//calculate quiz average with weight
	float qaverage = quiz1+quiz2+quiz3;
	float qaverage1 =(qaverage*.03);
	float wqaverage = qaverage1/3;
	float wquiz = wqaverage*10;

//insert program score and calculate with weight
	float program1;
	printf("Enter Program Score \n");
	scanf("%f", &program1);
	printf("Your program average is %f \n", program1);
	float wprogram = program1*.06;
	
//insert test score and calculate with weight
	float test1;
	printf("Enter Test Score \n");
	scanf("%f", &test1);
	printf("Your test average is %f \n", test1);
	float wtest = test1*.1;

//calculate weighted total 
	float sumweight = labw+wquiz+wprogram+wtest;

	float averageweight = sumweight/.29;

	printf("Your weighted average is %f \n", averageweight);
return 0;

}



