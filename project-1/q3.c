#include <stdio.h>

main(){
	
	int first_angle, second_angle, third_angle;
	
	printf("enter the first angle :");
	scanf("%d",&first_angle);
	
	printf("enter the second angle :");
	scanf("%d",&second_angle);
	
	third_angle = 180 - (first_angle+second_angle);
	
	printf("the third angle is : %d", third_angle);
}
