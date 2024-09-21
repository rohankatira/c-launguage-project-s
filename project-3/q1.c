#include<stdio.h>
main()
{
	char al = 'A';
	
	do{
		printf("%c ",al);
		al = al+=4;
	}
	while(al<='Z');
}
