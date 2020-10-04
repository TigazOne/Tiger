#include <stdio.h>
double pris (double prisexklmoms, double momssats)
{
return (prisexklmoms*(momssats/100+1)); 
}
void skrivaPrisExMoms()
{
    printf("Pris exkl moms?");
}
void skrivMoms()
{
    printf ("Momssats?");
}

int main()
{
    skrivaPrisExMoms();
    double prisExklMoms;
    scanf("%lf", &prisExklMoms);
    double momssats;
    skrivMoms();
    scanf("%lf", &momssats);
    double prisInkmoms = pris (prisExklMoms, momssats);
    printf("Priset inkl moms är: %.2lf", prisInkmoms);
    return 0;
}