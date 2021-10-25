//Ash;yn Hanks
//dr. Pittman 


#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h> 
#define MAX 10


int findChars(char gameWord[], char secretWord[], int length);


int main (void) 
{
    const int numberOfWords = 20;
    int length;
    srand((unsigned)time(NULL)); //generate a random seed based on time so it's different every time
    int ran = rand()% numberOfWords; //Generate a random number between 0 to numberOfWords - 1
    char* dictionary[] = {"who", "lives", "in","a", "pineapple", "under","the", "sea", "absorbant", "and", "yellow", "porous","is", "he", "sponge","bob", "square","pants","crabby","patties"}; //array of word strings


    printf("%s\n", dictionary[ran]);

    printf(" \nYou will be given a maximum of 7 incorrect guesses.\n");

    length=strlen(dictionary[ran]);
    printf("%d\n", length);
    char* secretWord[MAX];
    secretWord[length]= dictionary[ran];

    char gameWord[length];

    int i;
    for (i=0; i<length; i++)
    {
	gameWord[i] = "*";
    }

    for (i=0; i<length; i++)
    {
        printf("%s", gameWord[i]);
    }
    printf("\n");
    printf("7 turns left \nEnter a letter:    \n");

    while(findChars(&gameWord[length], secretWord[length], length)!=0) 
    {
        (findChars(&gameWord[length], secretWord[length], length));
    }
    printf("6 turns left \nEnter a letter:    \n");

    while(findChars(&gameWord[length], secretWord[length], length)!=0) 
    {
        (findChars(&gameWord[length], secretWord[length], length));
    }
    printf("5 turns left \nEnter a letter:    \n");

    while(findChars(&gameWord[length], secretWord[length], length)!=0) 
    {
        (findChars(&gameWord[length], secretWord[length], length));
    }
    printf("4 turns left \nEnter a letter:    \n");

    while(findChars(&gameWord[length], secretWord[length], length)!=0) 
    {
    (findChars(&gameWord[length], secretWord[length], length));
    }
    printf("3 turns left \nEnter a letter:    \n");

    while(findChars(&gameWord[length], secretWord[length], length)!=0) 
    {
        (findChars(&gameWord[length], secretWord[length], length));
    }
    printf("2 turns left \nEnter a letter:    \n");

    while(findChars(&gameWord[length], secretWord[length], length)!=0) 
    {
        (findChars(&gameWord[length], secretWord[length], length));
    }
    printf("1 turns left \nEnter a letter:    \n");

    while(findChars(&gameWord[length], secretWord[length], length)!=0) 
    {
        (findChars(&gameWord[length], secretWord[length], length));
    }
    printf("Sorry, no more turns left. The secret word was ???");

return 0;
}



int findChars(char gameWord[],char secretWord[], int length) {
int i;
char character[MAX];
    while((getchar()) != '\n'){
        character[0]=getchar();
        for (i=0; i<length; i++){
            if (secretWord[i]==character[0]){
                strncpy(gameWord[i],secretWord[i],1);
                for (i=0; i<length; i++){
                    printf("%s", gameWord[i]);
                    return 1;
                }
            }
            else
                return 0;
        }
    return 0;
    }
return 0;
}
