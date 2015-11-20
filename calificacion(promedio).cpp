#include<stdio.h>
#include<conio.h>

float  calificacion1;
float  calificacion2;
float  calificacion3;
float  calificacion4;
float suma;
float prom;

int  main()

{
	
	printf("ingrese calificacion obtenida en algebra 1  ");
	scanf("%f",&calificacion1);
		printf("ingrese calificacion obtenida en ingles 2 ");
	scanf("%f",&calificacion2);
		printf("ingrese calificacion obtenida en programacion 3 ");
	scanf("%f",&calificacion3);
		printf("ingrese calificacion obtenida en valores  4 ");
	scanf("%f",&calificacion4);
	suma=calificacion1+calificacion2+ calificacion3+ calificacion4;
	prom=suma/4;
	
	
	if(prom>=7){
		printf("  aprobado  ");
	}else{
		printf(" reprobado");
	}
	
	
	getch();
	
}

