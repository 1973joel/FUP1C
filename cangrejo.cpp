#include<stdio.h>
#include<stdlib.h>
int profundidad;
int dia,noche;
int salir;
int baja;
int sube;
int dias;
int a;


int main()
{
	printf("programa que muestre cuantos dias sale un cangrejo del hoyo\n");
	printf("ingrese numero de metros de profundidad del hoyo\n");
	scanf("%d",& profundidad);
	printf("dame profundidad de metros que sube\n");
	scanf("%d",& dia);
	printf("dame metros que baja\n");
	scanf("%d",& noche);

	if(dia>noche)
{
    a=1;
	baja=0 ;
	dias=0;
	sube=0;
	while(profundidad>=sube)
{
    sube=sube+dia;
    sube=sube-noche;
    salir=salir+1;
    if(sube>=profundidad)
{
    salir=salir-1;
}   
}
   printf("el cangrejo sale el dia %d \n",salir);
   if(noche>dia)
{
    printf("el cangrejo nunca sale \n");
}

    system("pause");
}
}       	
