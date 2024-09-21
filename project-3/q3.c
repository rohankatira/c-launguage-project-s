#include <stdio.h>

main(){
	
	int number1,number2,number3,result;
	
	printf("enter the number: "); 
	scanf("%d",&number1);
	
	number3=number1%10;  
	
	while(number1>=10){   
		
		number1/=10;  
	}
	
	number2=number1;  
	
	result=number2+number3;  
	
	printf("the sum of first and last digit are: %d",result); 

}
