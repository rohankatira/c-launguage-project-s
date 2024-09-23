#include <stdio.h>
main()
{
  float f_percentage;  
  int marks;     
  char grade;    
  
  printf("Enter your score: ");  
  scanf("%f",&f_percentage);
  
  marks=(int)f_percentage; 
  
  grade = (marks<=100 && marks>=90)?'A' : (marks<=89 && marks>=80)? 'B' : (marks<=79 && marks>=70)? 'C' : (marks<=69 && marks>=60)? 'D' : (marks<=59 && marks>=40)? 'E' : (marks<=39 && marks>=20)? 'F' : 'F';
  
  printf("Your grade is %c\n", grade); 
  
  switch(grade){
  	
  	case'A':
  	printf("Excellent Work\n"); 
  	break;
  	
  	case'B':
  	printf("Well Done\n");  
  	break;
  	
  	case'C':
  	printf("Good Work\n");  
  	break;
  	
  	case'D':
  	printf("You Passed,but you could do better\n");  
  	break;
  	
  	case'E':
  	printf("Need to work hard\n");  
  	break;
  	
  	case'F':
  	printf("You have failed the examination");  
  	break;
  	
  	default:
  	printf("invalid grade\n");  
  	break;
  } 
  
  if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D'){
  	printf("Congratulations! You are eligible for the next level");
  }else{
  	printf("Please try your luck next time");
  }
   
}
