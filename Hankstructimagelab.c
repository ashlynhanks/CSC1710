//Ashlyn Hanks
//Dr. Pittman 
//Struct Image Lab


#include <stdio.h>

struct Pixel
{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
};


struct ImageType
{
    char Type[3];
    char comment[256];
    int width, height;
    int maxcolor;
    struct Pixel image[1000][1000];
};


struct imageType imageA;

int main (void)
{

    char newlinechar, filename[30];
    int i, j;
 

    struct imageType imageA;

    FILE *inputfile;

    fprintf(stderr, "Please enter a file name of a P3 file to be converted to a P6 file: ");
    fscanf(stdin, "%s", filename);

    inputfile = fopen(filename, "r");




    fscanf(inputfile, "%[^\n]%c", imageA.Type, &newlinechar);
    fscanf(inputfile, "%[^\n]%c", imageA.comment, &newlinechar);
    fscanf(inputfile, "%i", &imageA.width);
    fscanf(inputfile, "%i", &imageA.height);
    fscanf(inputfile, "\n%i", &imageA.maxcolor);


    for (i=0; i<imageA.height; i++)
    {
	for (j=0; j<imageA.width; j++)
	{
	    fscanf(inputfile, "%hhu", &imageA.image[i][j].red);
	    fscanf(inputfile, "%hhu", &imageA.image[i][j].green);
	    fscanf(inputfile, "%hhu", &imageA.image[i][j].blue);
	}
    }

   
    if (inputfile == NULL)
    {
	fprintf(stderr, "Data file could not be read.\n");
	
	return 1;
    }


    fclose(inputfile);


    FILE *outputfile;

    outputfile = fopen("newimageHanks.ppm", "w");


    fprintf(outputfile, "P6\n");
    fprintf(outputfile, "%s\n", imageA.comment);
    fprintf(outputfile, "%i%i\n", imageA.width, imageA.height);
    fprintf(outputfile, "%i\n", imageA.maxcolor);



    for (i=0; i<imageA.height; i++)
    {
	for (j=0; j<imageA.width; j++)
	{
	    fprintf(outputfile, "%c", imageA.image[i][j].red);
	    fprintf(outputfile, "%c", imageA.image[i][j].green);
	    fprintf(outputfile, "%c", imageA.image[i][j].blue);
	}
    }


    fclose(outputfile);

    return 0;
}
