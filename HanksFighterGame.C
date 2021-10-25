//Ashlyn Hanks
//Dr. Pittman
//home/student/ahanks/csc1710/program4

#include <stdio.h>
#include "randomNumber.h"
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

struct Fighter
{
    char name[30];
    int hp;
    int wins;
};

int Attack (void)
{
    int p;
    p = getRandomNumber(1,6);
    sleep(1);
    if (p%2==0)
	return 0;
    else
	return 1;
}


int RunAway (void)
{
    int run;
    run = getRandomNumber(0,1);
    sleep (1);
    return run;
}


int Punch (void)
{
    int a;
    a=getRandomNumber(1,4);
    sleep(1);
    return a;
}

int Kick (void)
{
   int dam;
   dam = getRandomNumber(2, 5);
   sleep(1);
   return dam;
}


int main (void)
{
    int x=0, cont=1, tempHP1=0, tempHP2=0, attackType, damage, breakPoint;
    char ui[2], quit[1]={'Q'}, winner[30];
    struct Fighter challenger1;
    struct Fighter challenger2;
   

    fprintf(stderr,"Enter the name of the new challenger: \n");
    fscanf(stdin,"%s", challenger1.name);
    challenger1.hp = getRandomNumber(25, 30);
    tempHP1 = challenger1.hp;
    sleep(1);

    fprintf(stderr,"Enter the name of the new challenger: \n");
    fscanf(stdin,"%s", challenger2.name);
    challenger2.hp = getRandomNumber(25, 30);
    tempHP2 = challenger2.hp;
    sleep(1);



    while(x<10)
    {
	if (tempHP1 <= (0.25 * challenger1.hp))
         breakPoint = RunAway();

	 if (breakPoint == 1)
      {
         fprintf(stderr,"%s flees and %s wins.\n", challenger1.name, challenger2.name);
         memcpy(winner, challenger2.name, sizeof(winner));
         break;
      }


    attackType = Attack();
    sleep(1);
       
      if (attackType == 0)
         damage = Punch();
      else
         damage = Kick();

     tempHP2 = tempHP2 - damage;

     if (tempHP2 < 0)
         tempHP2 = 0;
     else
         tempHP2 = tempHP2;

     if (attackType == 0)
         fprintf(stderr,"%s punches %s %i %i\n", challenger1.name, challenger2.name, tempHP1, tempHP2);
     else
         fprintf(stderr,"%s kicks %s %i %i\n", challenger1.name, challenger2.name, tempHP1, tempHP2);


    if (tempHP2 <= 0)
      {
         memcpy(winner, challenger1.name, sizeof(winner));
         break;
      }


    if (tempHP2 <= (0.25 * challenger2.hp))
         breakPoint = RunAway();

    if (breakPoint == 1)
      {
         fprintf(stderr,"%s flees and %s wins.\n", challenger2.name, challenger1.name);
         memcpy(winner, challenger1.name, sizeof(winner));
         break;
      }


     attackType = Attack();
      sleep(1);
      
        if (attackType == 0)
         damage = Punch();
        else
         damage = Kick();



    tempHP1 = tempHP1 - damage;

      if (tempHP1 < 0)
         tempHP1 = 0;
      else
         tempHP1 = tempHP1;

      if (attackType == 0)
         fprintf(stderr,"%s gets punched by %s %i %i\n", challenger1.name, challenger2.name, tempHP1, tempHP2);
      else
         fprintf(stderr,"%s gets kicked by %s %i %i\n", challenger1.name, challenger2.name, tempHP1, tempHP2);

      if (tempHP1 <= 0)
      {
         memcpy(winner, challenger2.name, sizeof(winner));
         break;
      }

      x++;
   }


    FILE *victor;
   victor = fopen("/home/students/dmalloy/csc1710/prog4/victor", "w");



     if (strcmp(challenger1.name,winner)==0)
   {
      fprintf(victor, "%s", challenger1.name);
      fprintf(victor, "\n%i", challenger1.hp);
   }

   if (strcmp(challenger2.name,winner)==0)
   {
      fprintf(victor, "%s", challenger2.name);
      fprintf(victor, "\n%i", challenger2.hp);
   }



    fclose(victor);


    fprintf(stderr,"Would you like to keep playing? Type Q to quit or any single character to continue: \n");
   fscanf(stdin,"%1s", ui);

   if(ui[0] == quit[0])
      cont = 0;
   else
      cont = 1;



    while (cont != 0)
    {
      x=0;
      breakPoint=0;
      
      victor = fopen("/home/students/ahanks/csc1710/program4/victor", "r");
      fscanf(victor, "%s", &challenger1.name);
      fscanf(victor, "\n%i", &challenger1.hp);
      tempHP1 = challenger1.hp;
      fclose(victor);
      

      fprintf(stderr,"Enter the name of the new challenger: \n");
      fscanf(stdin,"%s", challenger2.name);
      challenger2.hp = getRandomNumber(25, 30);
      tempHP2 = challenger2.hp;                                                                                   sleep(1);
      

     while(x<10)
     {
        if (tempHP1 <= (0.25 * challenger1.hp))
           int breakPoint = RunAway();
        if (breakPoint == 1)
        {
            fprintf(stderr,"%s flees and %s wins.\n", challenger1.name, challenger2.name);
            memcpy(winner, challenger2.name, sizeof(winner));
            break;
        }
       


    attackType = Attack();
    sleep(1);
    

    if (attackType == 0)
       damage = Punch();
   

    else
        damage = Kick();


    tempHP2 = tempHP2 - damage;
  

    if (tempHP2 < 0)  
        tempHP2 = 0;
    else
        tempHP2 = tempHP2;
 

    if (attackType == 0) 	                                                                              	    fprintf(stderr,"%s punches %s %i %i\n", challenger1.name, challenger2.name, tempHP1, tempHP2); 	    else	                                                                                                    fprintf(stderr,"%s kicks %s %i %i\n", challenger1.name, challenger2.name, tempHP1, tempHP2);
  

    if (tempHP2 <= 0)                                                                              {
	memcpy(winner, challenger1.name, sizeof(winner)); 	                                       break; 	                                                                                	    }	                                                                                                               	                                                                                                    if (tempHP2 <= (0.25 * challenger2.hp))
        breakPoint = RunAway();
      
    if (breakPoint == 1) 	                                                                                {  
        fprintf(stderr,"%s flees and %s wins.\n", challenger2.name, challenger1.name);                              memcpy(winner, challenger1.name, sizeof(winner)); 	                                                        break;	                                                                                                }
      

     attackType = Attack();                                                                                      sleep(1); 	                                                                                	  	  	                                                                                                               	                                                                                                                                                                                                          if (attackType == 0) 	                                                                                          damage = Punch();     
      else 
	  damage = Kick();
    

    tempHP1 = tempHP1 - damage;
     


    if (tempHP1 < 0) 	                                                                                	    tempHP1 = 0;                                                                                	    else  	                                                                                                    tempHP1 = tempHP1;                                                                                                      	                                                                                                                                                                                                     if (attackType == 0)
         fprintf(stderr,"%s gets punched by %s %i %i\n", challenger1.name, challenger2.name, tempHP1, tempHP2);
    else	                                                                                	  	    fprintf(stderr,"%s gets kicked by %s %i %i\n", challenger1.name, challenger2.name, tempHP1, tempHP2);
      

    if (tempHP1 <= 0)                                                                                           {
        memcpy(winner, challenger2.name, sizeof(winner));
	break;
    } 	                                                                                	  	 	x++;

}



     victor = fopen("/home/students/ahanks/csc1710/progam4/victor", "w");

    if (strcmp(challenger1.name,winner)==0)
    {
	fprintf(victor, "%s", challenger1.name);
	fprintf(victor, "\n%i", challenger1.hp);
    }

    if (strcmp(challenger2.name,winner)==0) 	                                                                {
	fprintf(victor, "%s", challenger2.name);
	fprintf(victor, "\n%i", challenger2.hp);
    }



    fclose(victor);

    fprintf(stderr,"Would you like to keep playing? Type Q to quit or any single character to continue: \n");
    fscanf(stdin,"%1s", ui);


    if(ui[0] == quit[0])
	cont = 0;
    else
	cont = 1;
}
    return 0;	                                                                                	  	  	                                                                                                               	                                                                                                                                                                                                                                                                                                                                                               	                                                                                                                                                                                                              	  	                                                                                                                                                        }
