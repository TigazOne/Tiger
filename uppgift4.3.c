/*
______________________________________________________________________________________
Date        : 2020-09-29
File        : uppgift4.3.c
Description : Räkna ut dagslön upptill 10 milj.
Author      : Rickard Tiger r.tiger@hotmail.se
______________________________________________________________________________________
*/
int main()
{
    int inkomst = 1;
    int inkomstViVillHa = 1000000000;
    int antalDagar = 0;
    int totalSumma = 0;
    while (inkomst < inkomstViVillHa)
    {
    totalSumma += inkomst;
    inkomst *= 2;
    antalDagar++;
    }
    printf("Antal dagar for att na 10 000 000kr:%d dagar", antalDagar);
    return 0;
}