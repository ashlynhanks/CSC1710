//Ashlyn Hainks
////Dr. Pittman
////home/student/ahanks/csc1710/lab10



#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void main()
{

// Initialize variables for array 
    char val, name[10][8], tname[10][8], temp[8], m;
    int i, j, n=5;
bool isPresent = false;



                                                for (i = 0; i < n; i++)
                                                        {
                                                                   scanf("%s", name[i])
                                                                                strcpy(tname[i], name[i]);
                                                                                            scanf("%c", &val);
                                                                                                     }

                                                                                                             for (i = 0; i < n - 1 ; i++)
                                                                                                                     {
                                                                                                                                 for (j = i + 1; j < n; j++)
                                                                                                                                             {

                                                                                                                                                     //List the names in alphabetical order

                                                                                                                                                                     if (strcmp(name[i], name[j]) > 0)
                                                                                                                                                                                     {
                                                                                                                                                                                                         strcpy(temp, name[i]);
                                                                                                                                                                                                                             strcpy(name[i], name[j]);
                                                                                                                                                                                                                                                 strcpy(name[j], temp);

                                                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                      }


                                                                                                                                                                                                                                                                                               int l=0;

                                                                                                                                                                                                                                                                                                       int r=n-1;


                                                                                                                                                                                                                                                                                                               scanf("%c", &val);

                                                                                                                                                                                                                                                                                                                       while (!isPresent && l<=r)
                                                                                                                                                                                                                                                                                                                               {
                                                                                                                                                                                                                                                                                                                                            m=(l+r)/2;
                                                                                                                                                                                                                                                                                                                                                         if (val == name[i])
                                                                                                                                                                                                                                                                                                                                                                          isPresent = true;
                                                                                                                                                                                                                                                                                                                                                                                       else if (val!=name[i])
                                                                                                                                                                                                                                                                                                                                                                                                       l = m+l;
                                                                                                                                                                                                                                                                                                                                                                                                                    else
                                                                                                                                                                                                                                                                                                                                                                                                                                    r= m-l;
                                                                                                                                                                                                                                                                                                                                                                                                                                            }


                                                                                                                                                                                                                                                                                                                                                                                                                                                    printf("Sorted names:\n");

                                                                                                                                                                                                                                                                                                                                                                                                                                                            for (i = 0; i < n; i++)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                printf("%s\n", name[i]);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        }


                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                if (isPresent = true)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            printf("Matching names:\n");
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        printf("%s\n %s\n", name[0], name[1]);


                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            }

