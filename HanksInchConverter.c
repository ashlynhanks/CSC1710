//Ashlyn Hanks
//Dr. Pittman 
//home/student/ahanks/csc1710/program1/HanksInchConverter.c



#include <stdio.h>

int main(void)

{
	int ich;
	printf("Enter number of inches:");
	scanf("%i", &ich);

	
	int mi = ich/63360;
	printf("Miles = %i\n", mi); 
	//calculate the number of miles

	
	int mmi = ich%63360;
	//printf(" remainder for miles is %i\n", mmi);
	//find remaider of miles

	
	int yd = mmi/36;
	printf("Yards = %i\n", yd);

	
	int myd = mmi%36;
	//printf("remaider inches is %i\n", myd);


	int ft = myd/12;
	printf("Feet = %i\n", ft);
	

	int mft  = myd%12;
	printf("Inches = %i\n", mft);

	
	return 0;
}
