#include<stdio.h>

struct pixel
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
};


struct imageType
{
    char Type[3];
    char comment[256];
    char newlinechar;
    int width, height;
    int maxcolor;
    struct pixel image[1000][1000];
};

FILE *inputfile;
	inputfile = fopen("/home/faculty/ktitus/USflag.ppm", "r");




int main(void)


{ 

        int red, green, blue, width, height, bits, total, grey, a;

	struct imageType imageA;

	char Type[3], comment[256], newlinechar;
	
        fscanf(inputfile, "%[^\n]%c",imageA.Type, &newlinechar);
        fscanf(inputfile, "%[^\n]%c", comment, &newlinechar);
	fscanf(stdin, "%s", filename);
	
	inputfile = fopen(filename, "r");
	
        fscanf(inputfile, "%i", &width);
        fscanf(inputfile, "%i", &height);
        fscanf(inputfile, "%i", &bits);


        fprintf(stdout, "P6\n");
        fprintf(stdout, "%s\n", comment);
        fprintf(stdout, "%i %i\n", width, height);
        fprintf(stdout, "%i \n", bits);

        total = width*height;


	struct pixel image;
	
        for (a=0; a<total; a++)
        {
		struct pixel imageA;
		
                fscanf(stdin, "\n%i", &red);

                fscanf(stdin, "\n%i", &blue);

                fscanf(stdin, "\n%i", &green);

                grey= (int) ((red*0.35)+(green*0.5)+(blue*0.15));

                fprintf(stdout, "%i\n", grey);
        }


	
	imageA.image[1000][1000].red;
	imageA.image[1000][1000].blue;
	imageA.image[1000][1000].green;

	
	if(inputfile == NULL)
	{
		fprintf(stderr, "dara file could not be read\n");
		return 1; 
	}


	fclose(inputfile);


	FILE *outputfile:
	outputfile = fopen("NewimgHanks/ppm", "w");
	
	fprintf(outputfile, "P6\n");

	fclose(outputfile);
}

