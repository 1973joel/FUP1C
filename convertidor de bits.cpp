//Convertidor de unidades en bit
//Convertidor de MB

#include<stdio.h>

	float bit;

	int byte;
	int kilo;
	int giga;
	float tera;
	int N1;

int main ()
{
	printf ("Ingresa numero de megas a convertir");
	scanf ("%d",& N1);
	bit = (float) 8*1024*1024*N1;
	byte = 1024*1024*N1;
	kilo = 1024*N1;
	giga = N1/1024;
	tera = (float)N1/1048576;
	
	printf ("en bit es: %f\n", bit);
	printf ("en byte es: %d\n", byte);
	printf ("en kilobyte es: %d\n" , kilo);
	printf ("en gigabyte es: %d\n", giga);
	printf ("en terabyte es: %f\n", tera);
	
}
