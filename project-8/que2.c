#include <stdio.h>

int squ(int row, int col){
	
	int i,j;		
	
	printf("enter the row: ");		
	scanf("%d",&row);
	
	printf("enter the col: ");		
	scanf("%d",&col);
	
	int arr[row][col];		
	
	
	
	for(i=0;i<row;i++){		
		for(j=0;j<col;j++){		
			printf("enter the element: ");		
			scanf("%d",&arr[i][j]);
		}
	
	}
	
	
	for(i=0;i<row;i++){		
		for(j=0;j<col;j++){		

			int *ptr = arr[i][j]*arr[i][j];		
			
			printf("%d ",ptr);		
			
		}
		printf("\n");
	}
}


int main(){
	
	int row, col;		
	squ(row,col);		
	
	
}
