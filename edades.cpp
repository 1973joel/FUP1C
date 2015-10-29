#include<stdio.h>
#include<stdlib.h>

int edad;

 int main()
 
 {
 	printf("programa que tedice si eres bb,niño , adolecente,joven,adulto,adulto mayor, ");
 	printf("  introduce TU EDAD  ");	
 	scanf("%d",&edad);
 	
 	   if(edad>=1&&edad<=160){
 	   	
 	   	
 	   	
 	   	    if(edad<3){
 	   	    	printf("   eres  bebe  \n");
				}
			else{
					if(edad<13){
 	   	    	    printf("   eres  niño  \n");
				               }
		            else{
				        if(edad<19){
 	   	    	        printf("   eres  adolecente  \n");
			                        }
			            else{
			                 if(edad<29){
 	   	    	              printf("   eres  joven \n");
				                        }
						    else{
							       if(edad<60){
 	   	    	                     printf("   eres  adulto  \n");
			                                      	}
			                        else{
			                        	 if(edad>60){
 	   	    	printf("   eres  adulto  mayor  \n");
				}
									}              	
						}					
												}
				
 	   	                                   
 	   	    
 	   	   
			}
				}
 	   	    
 	   	    
 	   	    
 	   	    
 	   	    
 	   	    
		}
     	else{
 	     	    printf(" solo  edades  entre  1  Y   160  \n"); 
	   }
 	


 
 			
 	   system("pause");
 }
