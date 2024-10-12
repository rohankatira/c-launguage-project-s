#include<stdio.h>

float sum(float num1,float num2){
	float sum;
	sum=num1+num2;
	printf("The totl sum of both  are :- %.2f\n",sum);
}

float sub (float num1,float num2){
	float sub;
	sub=num1-num2;
	printf("The totl subtraction of both  are :- %.2f\n",sub);
}
float mul( float num1,float num2){
	float mul;
	mul=num1*num2;
	printf("The totl multiplication of both  are :- %.2f\n",mul);
}
float div(float num1,float num2){
	float div;
	div=num1/num2;
	printf("The totl dividion of both  are :- %.2f\n",div);
}
float mod(float num1, float num2){
	float mod;
	mod=(int)num1%(int)num2;
	printf("The totl modulus of both  are :- %.2f\n",mod);
}
int main(){
	int choice;
	float a,b;
	printf("wellcome of calculator\n");
	while(1){
		printf("1 Addition\n2 Subtraction\n3 Multiplication\n4 Divsion\n5 modulus\n0 Exit\n");
		printf("Enter your choices which operation to perform \n");
		scanf("%d",&choice);
			
		if(choice == 0){
 	 		printf("the program has been exited");
 	 		break;
		  }  
		printf("Enter the first number");
		scanf("%f",&a);
		printf("Enter the second number");
		scanf("%f",&b);
	switch(choice){
		case 1:
			sum(a,b);
			break;
		case 2:
			sub(a,b);
			break;
		case 3:
			mul(a,b);
			break;
		case 4:
			div(a,b);
			break;
		case 5:
			mod(a,b);
			break;
		default:
		printf("Invalid choice");				
	}
	}
	return 0;
}
