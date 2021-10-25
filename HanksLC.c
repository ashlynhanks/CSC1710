//Ashlyn Hanks
//Dr. Pittman 


#include <stdio.h>
#include <math.h>
int main()

{
	int PayNum, NumMonths,middlemath;
	float IntPay, PrinPay, PrinBal;
	float PurchPrice, Total, dp, AIR, MonthPay, PMT, PMI;



	printf("Enter the intial purchasing price: $");
	scanf("%f", &PurchPrice);
	
	printf("Enter Annual Intrest Rate: %");
	scanf("%f", &AIR);
	
	printf("Enter number of monthly payments: ");
	scanf("%i", &NumMonths);
	
	printf("Enter monthly payment ammount: $");
	scanf("%f", &MonthPay);
	
	printf("Enter down payment percentage: %");
	scanf("%f", &dp);

	
	if(dp<20)
	{
		printf("Please enter your private mortgage insurance cost: $");
		scanf("%f", &PMI);
	}
	
	
	AIR = AIR/100;
	AIR = AIR/12;

	PMT = AIR*PurchPrice/(1-pow((1+AIR),-NumMonths));
	printf("Your monthly payment amount is %f\n", PMT);
	 
	printf("                                                     Home Loan Calculator                                                      \n");	
	printf(" Payment Number          Interest Payment          Principle Payment          Principle Balance      Private Mortgage Insurance\n");
	printf("-------------------------------------------------------------------------------------------------------------------------------\n");

	
	PrinBal = PurchPrice;
	
	for(PayNum = 1; PayNum<= NumMonths; PayNum++)
	{
		IntPay=PrinBal*AIR;
		PrinPay=MonthPay-IntPay;
		PrinBal=PrinBal-PrinPay;
	
		printf("    %3i           %21.2f     %22.2f     %24.2f        %15.3f\n", PayNum, IntPay,PrinPay, PrinBal, PMI);

		
	}

	printf("-----------------------------------------------------------------------------------------------------------------------------------\n");
	printf("                      Total Intrest Paid              Total PMI Paid               Total Paid                                      \n");
	printf("                %15.2f               %15.3f                 %15.2f                                        \n", IntPay*NumMonths, PMI*NumMonths, (IntPay*NumMonths)+(PMI*NumMonths)+(MonthPay*NumMonths));             
		

 



	return 0;
}
