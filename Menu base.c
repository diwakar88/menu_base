
/*
Student Name:Diwakar kandel
Program:Write a menu base program for area of rectangle.
Lab No:15
Roll No:
Date:19nov,2016

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a=0,l=0,b=0,h=0;
 float area=0,peri=0,trap=0;
 x:
 printf("--------MENU-------------------\n");
 printf("-------Choose anyone -----------------\n");
 printf("Enter 1 for area of rectangle:\n");
 printf("Enter 2 for perimeter of rectangle:\n");
 printf("Enter 3 for area of trapezium:\n");
 printf("Enter 4 for Exit\n");
 
  printf("-----------Enter your choice-----------------------------\n");
  
  
  scanf("%d",&a);
  
  switch(a){
	  
	  case 1:
			
				printf("\n Enter length of rectangle:\n");
				scanf("%d",&l);
				printf("Enter base of rectangle:\n");
				scanf("%d",&b);
				area=l*b;
				printf("area of rectangle of %f",area);
				goto x;
				break;
				
				
		case 2:
		       
				printf("\n Enter length of rectangle:\n");
				scanf("%d",&l);
				printf("Enter base of rectangle:\n");
				scanf("%d",&b);
		       printf("\n Enter perimeter of rectangle is:\n");
		       peri=2*(l+b);
			   printf("Enter perimeter of rectangle of %f",peri);
			   goto x;
			   break;
			   
		case 3:
		       	   
               	printf("\n Enter base of trapazium:\n");
				scanf("%d",&a);
				printf("\n Enter length of trapezium:\n");
				scanf("%d",&l);
				printf("\n Enter height of trapazium:\n");
				scanf("%d",&h);
				trap=0.5*(a+l)*h;
				printf("Enter area of trapezium of %f",trap);
				goto x;
				break;
		
		case 4:
		       exit	(0);
		       break;
		       
		default:
		       printf("plz select 1 to 4:\n");
		       goto x;	
	  
	  
	  
	  }
 
 
 return 0;
}
