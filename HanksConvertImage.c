#include<stdio.h>
int main()


{
	char imageType[3];
	char comment[256];
	char newlinechar;

	int red, green, blue, width, height, bits, total, grey, a; 


	fscanf(stdin, "%[^\n]%c", imageType, &newlinechar);
	fscanf(stdin, "%[^\n]%c", comment, &newlinechar);

	fscanf(stdin, "%i", &width);
	fscanf(stdin, "%i", &height);
	fscanf(stdin, "%i", &bits);
	

	fprintf(stdout, "P2\n");
	fprintf(stdout, "%s\n", comment);
	fprintf(stdout, "%i %i\n", width, height);
	fprintf(stdout, "%i \n", bits);

	total = width*height;
	
	for (a=0; a<total; a++)
	{
		fscanf(stdin, "\n%i", &red);
		fscanf(stdin, "\n%i", &blue);
		fscanf(stdin, "\n%i", &green);
		grey= (int) ((red*0.35)+(green*0.5)+(blue*0.15));

		fprintf(stdout, "%i\n", grey);
	}



}
