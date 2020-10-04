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
int main()
{
	printf("Valkommen till en tabell som visar\n");
	printf("\n");//Snyggar till det lite
	printf("Tal Kvadrat och kubik av talen 1-12!\n\n");
	printf("\n");
	//For lop som gör en heltals variabel
	//Den betyder att sålänge i är mindre än eller lika med 12 så lägger den på en siffra
	//Startar på 1	
	for (int i = 1; i <= 12; ++i)
	{
	//3,6,6 mellan procenterna är för att snygga till raderna
	//Printar ut 3 int variabler alla är "i" och den tar först i,i*i och sen i*i*i
	printf("%3d %6d %6d\n", i, i*i, i*i*i);
	}
}