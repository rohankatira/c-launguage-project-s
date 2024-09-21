#include <stdio.h>
main()
{
	int number1,number2=0; // declaring the value of number 2=0
	
	printf("Enter the number:- ");
	scanf("%d",&number1);
	while(number1!=0){
		number1/=10;
		number2++;
	}
	printf("the total number digits are:- %d",number2);
}

