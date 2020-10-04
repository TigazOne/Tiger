/*
______________________________________________________________________________________
Date        : 2020-09-29
File        : blinkande.c 
Description : Make an simple program that writes: sos in morse code.
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
//Header files.
#include <stdio.h>
#include <unistd.h>
int main()
{
    //While loop that is true(1 is always true) makes it goes to eternity.
    while (1)
    {   //For loop that makes an int variable starting value 1 and makes it stop at three.
        //Prints . 3 times.
        for (int b = 1; b <= 3; b++)
        {
        printf(".");
        //Makes an pause, included in unistd.h
        usleep(100000);
        } 
        //Makes the same but -
        for (int b = 1; b <= 3; b++)
        {
        printf("-");
        usleep(300000);
        }
        for (int b = 1; b <= 3; b++)
        {
        printf(".");
        usleep(100000);
        }
    //Makes cmd clear after every for loop.
    system("cls");
    //prints a new line after everything.
    printf("\n");
    }
return 0;
}