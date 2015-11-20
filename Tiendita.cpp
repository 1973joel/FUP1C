#include <stdio.h>
#include <stdlib.h>


int num;
int menu;
int ganancias;
int main ()
{
    printf("Bienvenido a mi tiendita");
    printf("Presione 1 para ir a la venta\n");
    printf("Presione 2 para ver las ganancias\n");
    scanf("%d",&num);
    ganancias = 500;
    switch (num)
    {
           case 1:
                {
                     printf("Menu: \n");
                     printf("1.-soda\n");
                     printf("2.-papas\n");
                     printf("3.-chocolate\n");
                     printf("4.-jugo\n");
                     printf("5.-pistaches");
                     scanf("%d",&menu);
                     switch (menu)
                     {
                     	case 1:
                     		{
                     			printf("Has comprado soda\n");
                     			printf("Su precio es de $10");
		                    }break;
		                case 2:
							{
   		   					    printf("Has comprado papas\n");
							    printf("Su precio es de $8");
               			   }break;
						case 3:
							{
								printf("Has comprado chocolate\n");
								printf("Su precio es de $20");
							}break;
						case 4:
							 {
							 	printf("Has comprado jugo\n");
							 	printf("Su precio es de $12");
							 }break;
						case 5:
							{
								printf("Has comprado pistaches\n");
								printf("Su precio es de $350");
							}break;
						default :
						{
							printf("Caracter invalido");
						}	
					 }
                }break;
           case 2:
            	{
            		printf("Las ganancias totales son: %d",ganancias);
				}break;
			default :
			{
				printf("sintaxis error!!!!");
				}	
    }
}
