/*
______________________________________________________________________________________
Date        : 
File        : 
Description : 
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
//Header files.
#include <stdio.h>

int main () {
    printf("Antal rader? ");
    int rader;
    scanf("%d", &rader);
    for (int i = 1; i <=rader; i++)
    {
        for (int j = 1; j <=i; i++)
        {
            printf("%4d", j);
            printf("\n");
        }
            
    }
    

    return 0;
}