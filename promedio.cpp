#include<stdio.h>
#include<stdlib.h>

int cali[10];
int i;
int promedio;
int suma=0;

int main()
{
	printf("dame promedio de los alumnos\n");
	
	for(i=0;i<10;i++)
	{
		printf("dame la calificacion del alumno %d",i+1);
		scanf("%d,&cali(i)");
		
	}
	for(i=0;i<10;i++)
	{
		suma=suma+cali[i];
		
		
	}
	
	promedio=(float)suma/10;
	printf("el promedio de las calificaciones es %f\n",promedio);
	system("pause");
	
	
}
