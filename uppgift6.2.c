/*
______________________________________________________________________________________
Date        : 2020-10-03
File        : uppgift6.2.c
Description : Gör ett program som räknar ut moms och momssats.
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
#include <stdio.h>
// Här gör jag en funktion som heter pris och ger den två variabler
//Som försvinner när funktionen gjorts.
double pris(double prisexmoms, double momssats)
//Ger funktionen ett returvärde dvs gör formeln.
{
    return (prisexmoms*(momssats/100+1));
}

int main()
{
    double prisexMoms, momsSats, prisInklMoms;
    printf("Vad ar priset pa din vara exklusive moms?");
    scanf("%lf", &prisexMoms);
    printf("Vad har du for momssats?");
    scanf("%lf", &momsSats);
    //Här anropar jag formeln och sätter in den i de variabler som jag vill.
    prisInklMoms = pris(prisexMoms, momsSats);
    // här skriver jag ut variabeln med 2 decimaltal.
    printf("Ditt pris inkl momsar: %.2lf", prisInklMoms);
    return 0;
}