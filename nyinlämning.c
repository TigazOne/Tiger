#include <stdio.h>
int main(){
	// Skriver ut det som är mellan""
	printf("How many gallon/mile?");
	
	//en double variabel med tilldelat namn inget värde än
	double gallonMile;
	
	/*Läser in värdet vi fick från frågan i printf
	lägger värdet i gallonMile variabeln*/
	scanf("%lf", &gallonMile);
	
	/*En double variabel med namn och tilldelat värde
	värdet var supersvårt att lista ut dvs 
	den matematiska formeln.*/
	double literKm = 3.785/gallonMile/1.609*10;
	
	/*Skriver ut "" och tar variabeln "literkm"
	och skriver ut den efter: %.2lf gör att den skrivs
	ut med två decimaler och lf är kommandot för double*/
	printf("Converted to l/km: %.2lf\n", literKm);
	return 0;
}