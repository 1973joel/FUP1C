#include<stdio.h>
#include<stdlib.h>
int i;
int suma;
int final;
int main()
{
    i=1;
    suma=0;
    printf("programa que muestre la suma de numeros \n");
    scanf("%d",& final);
    while(i<=final);
    {
         scanf("dame un numero");
         suma=suma+i;
         i=i+1;           
}
     printf("%d",suma);
{     
     system("pause");
}
}
         
