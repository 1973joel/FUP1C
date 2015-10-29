# include<stdio.h>
int megas;
float bits;
float bytes;
float kilobytes;

float gigabytes;


float terabytes;



int main()


{
 printf("ingrese el numero de megas para la conversion  ");
	        scanf("%d",&megas);
	
	    bits=(float)((megas*1024)*1024)*8;
	     bytes=(float)((megas*1024)*1024);
	 
	      kilobytes=(float)megas*1024;
	      gigabytes=(float)(megas/1024);
	       
	       terabytes=(float)((megas/1024)/1024);
	       
		printf("tu resultado de los bits es  %f\n",bits);   
			printf("tu resultado de los bytes es %f\n",bytes);
				printf("tu resultado de los kilobytes es %f\n",kilobytes);   
					printf("tu resultado de los gigabytes es %f\n",gigabytes);      
			
				printf("tu resultado de los terabytes es %f\n",terabytes);      
			
			
		
		system("pause");	
	
	
}
