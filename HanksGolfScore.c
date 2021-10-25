//Ashlyn Hanks
//Dr. Pittman 
//home/student/ahanks/csc1710/program3/HanksGolfScore.c

#include <stdio.h>

int main (void)

{


	
	int par[18], p=0;

	for(int a = 0; a<18; a++)
	{
	    scanf("%i", &par[a]);
	    p = p + par[a];
	}

	

	char names[4][8];

	for (int a=0; a<4; a++)
	{
	    scanf("%s", &names[a]);
	}
	


	int score[18][4];
	
	for(int a=0; a<18; a++)
	{
	    for(int y=0; y<4; y++)
	    {
	        scanf("%i", &score[a][y]);
	    }
	}



	int sum[4] ={0};
	
	for( int a=0; a<18; a++)
	{
	    sum[0] = sum[0] + score[a][0];
	    sum[1] = sum[1] + score[a][1];
	    sum[2] = sum[2] + score[a][2];
	    sum[3] = sum[3] + score[a][3];
	}
	

	for(int a=0; a<4; a++)
	{
	    printf("%s %i\n", names[a], sum[a]);
	}

	printf("\n");



	int winner = 0;
	int temp = sum[0] - p;

	for(int a=1; a<4; a++)
	{
	    if(temp>sum[a] - p)
	     {
		temp = sum[a]-p;
		winner = a;
	     }
	}

	
	printf(" %s is the winner with a score of %i.\n", names[winner], temp);

	printf("\n");





	printf("          ");

	for(int a=1; a<19; a++)
	    printf("%3i ", a);

	printf("    Score\n");


	for(int a=0; a<4; a++)
	{
	    printf("%8s   ", names[a]);
	    
	for(int y=0; y<18; y++)
		printf("%2i  ", score[y][a]);
	    printf("    %i\n", sum[a]);
	}

	return 0;
	
}
	
