#include <stdio.h>

main(){
	
	int i,j;   
	
	for(i=1; i<=5; i++){  
		
		for(j=41; j<=41+i-1; j++){   
			printf("%d ",j); 		 
		}
		
		printf("\n");   
	}
}
