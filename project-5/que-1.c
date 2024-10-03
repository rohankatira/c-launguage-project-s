#include <stdio.h>

main(){
	
	int i,size,element;			
	
	printf("enter the size: ");
	scanf("%d",&size);
	
	int arr[size];
	
	for(i=0; i<size; i++){    
		
		printf("enter the a[%d]: ",i); 
		scanf("%d",&arr[i]);
		
	}
	
	printf("the negative value from array is: ");
	
		for(i=0; i<size; i++){   
		
			if(arr[i]<0){		 
			printf("%d ",arr[i]);
		}
		
		}
}
