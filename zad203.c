/*  Program treba stringu dodati navodnike na zadnjem indexu ako smo dodali razmake na kraju recenice.  */

#include <stdio.h>
#define MAX_VELICINA 100 

/* Function declaration */
void navodnici(char * string);



int main()
{
    char string[MAX_VELICINA];

   
    printf("Unesi string : ");
    gets(string);

    printf("\nString na pocetku : \"%s\"\n", string);

    navodnici(string);

    printf("\nString na kraju : \"%s\"\n", string);

    return 0;
}





void navodnici(char * string)
{
    int zadnjiIndex, i;


    i = 0;
    while(string[i] != '\0')
    {
        if(string[i] != ' ' && string[i] != '\t' && string[i] != '\n')
        {
            zadnjiIndex = i;
        }

        i++;
    }

  
    string[zadnjiIndex + 1] = '\0';
}
