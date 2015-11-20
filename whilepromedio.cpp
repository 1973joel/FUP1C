#include<stdio.h>
#include<stdlib.h>

 int valor;
 int i=1;
 int suma;
 float division;
 
 int main()
{ 
     printf("programa que calcule el promedio \n");
     suma=0;
     while(i<=10)
 {
     printf("dame un numero\n");
     scanf("%d",& valor);
     suma=suma+valor;
     i=i+1;
}
     division=(float)suma/10;
     printf("el promedio es %f\n",division);
     
     system("pause");
}     
