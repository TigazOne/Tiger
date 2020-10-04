#include <stdio.h>
int main()
{

	//Skriver ut "" 
	printf("Vad har du gallons/mile forbrukning?");
	//En double variabel med tilldelat namn
	double milesPerGallon;
	//läser in värdet från det jag skriver på frågan
	scanf("%lf", &milesPerGallon);
	//En double variabel med uträkningsformeln
	double literPerMil = 3.785/milesPerGallon/1.609*10;
	//Skriver ut "" %.2f är =2 decimaler och sätter in variabeln "literpermil" efter:
	printf("i l/mil blir det: %.2f\n", literPerMil );
	return 0;
}