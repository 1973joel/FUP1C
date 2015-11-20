#include<stdio.h>
#include<stdlib.h>

int i;
int j;
int final;
int main()
{
    printf("programa que nos muestre piramide de numeros\n");
    printf("dame un numero\n");
    scanf("%d",& final);
    i=1;
    while(i<=final)
{
    j=1;
    while(j<=i)
{    
    {printf("%d",i);
    j++;
}
     printf("\n");
     i++;//i=1+1;
}     
     system("pause");
}
}      
                     
