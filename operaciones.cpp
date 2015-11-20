#include<stdio.h>/*PROGRAMA  2
  */
int nu;
int nd;
int resultados; 
int resultador; 
int resultadom; 
float resultadod; 
int  main()

{
	    printf("ingrese el numero 1 para la operacion  ");
	        scanf("%d",&nu);
	
		printf("ingrese el numero 2 para la operacion   ");
	        scanf("%d",&nd);
	        
	    resultados=nu+nd;
	     resultador=nu-nd;
	      resultadom=nu*nd;
	       resultadod=(float)nu/nd;
	       
		printf("tu resultado de la suma es  %d   + %d  es %d\n",nu,nd,resultados);   
			printf("tu resultado de la resta es   %d   - %d  es %d\n",nu,nd,resultador);  
				printf("tu resultado de la multiplicacion es   %d   * %d  es %d\n",nu,nd,resultadom);  
					printf("tu resultado de la division es  %d   / %d  es %f\n",nu,nd,resultadod);  
		system("pause");
		 
	
}
