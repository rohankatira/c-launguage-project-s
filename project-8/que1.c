#include<stdio.h>

main(){
	int *ptr;
	char str[100];
	int i,count=0;
	
		printf("enter the string:- ");
		scanf("%[^\n]s", &str);
		
		for(i=0;str[i]!='\0'; i++){
			ptr=str[i];
			count++;
		}
		
		printf("%d",count);
}
