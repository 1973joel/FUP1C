#include<stdio.h>
#include<stdlib.h>
int res;
int numero;
int main()
{
    printf("programa que muestre un numero a descomponer \n");
    printf("dame el numero a descomponer");
    scanf("%d",& numero);
    do
    {
         res=numero%10;
         numero=numero/10;
         printf("el digito es%d\n",res);
         
         while(numero !=0);
    {      system("pause")

}
}              
