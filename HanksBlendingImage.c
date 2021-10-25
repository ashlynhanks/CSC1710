//Ashlyn Hanks
//Dr. Pittman 
//Lab 13 
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


struct ImageType image1;

struct ImageType image2;

int ReadImage (struct ImageType *imageptr)
{

    char newlinechar, filename[30];
    int i, j;


    FILE *inputfile;

    fprintf(stderr, "Please enter a file name of a P3 file to be converted to a P6 file: ");
    fscanf(stdin, "%s", filename);

    inputfile = fopen(filename, "r");




    fscanf(inputfile, "%[^\n]%c", (*imageptr).Type, &newlinechar);
    fscanf(inputfile, "%[^\n]%c", (*imageptr).comment, &newlinechar);
    fscanf(inputfile, "%i", (*imageptr).width);
    fscanf(inputfile, "%i", (*imageptr).height);
    fscanf(inputfile, "\n%i", (*imageptr).maxcolor);


    for (i=0; i<(*imageptr).height; i++)
    {
        for (j=0; j<(*imageptr).width; j++)
        {
            fscanf(inputfile, "%hhu", (*imageptr).image[i][j].red);
            fscanf(inputfile, "%hhu", (*imageptr).image[i][j].green);
            fscanf(inputfile, "%hhu", (*imageptr).image[i][j].blue);

        }
    }


    if (inputfile == NULL)
    {
        fprintf(stderr, "Data file could not be read.\n");

        return 1;
    }


    fclose(inputfile);
}



int main (void)
{

    char newlinechar, filename[30];
    int i, j;



    ReadImage(&image1);

    ReadImage(&image2);

 

FILE *outputfile;

 


    fprintf(outputfile, "P6\n");
    fprintf(outputfile, "%s\n", image1.comment);
    fprintf(outputfile, "%i%i\n", image1.width, image1.height);
    fprintf(outputfile, "%i\n", image1.maxcolor);



    for (i=0; i<image1.height; i++)
    {
        for (j=0; j<image1.width; j++)
        {
            fprintf(outputfile, "%c", (int)(0.5*(image1.image[i][j].red)+ 0.5*(image2.image[i][j].red)));
            fprintf(outputfile, "%c", (int) (0.5*(image1.image[i][j].green)+ 0.5*(image2.image[i][j].green)));
            fprintf(outputfile, "%c", (int)(0.5*(image1.image[i][j].blue)+ 0.5*(image2.image[i][j].green)));
        }
    }


    fclose(outputfile);   



    return 0;
}
