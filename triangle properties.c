#include<stdio.h>

int main()
{
	int side1,side2,side3;
	
	printf("length of 1st side:");
	scanf("%d",&side1);
		printf("length of 2nd side:");
	scanf("%d",&side2);
		printf("length of 3rd side:");
	scanf("%d",&side3);
	printf("\n");
	
	if(side1==side2 && side2==side3)
	{
		printf("it is an equilatral triangle");
	}
	else if(side1==side2 || side2==side3||side1==side3)
	{
		printf("it is an Isosceles triangle:");
		
    }
	else
	{
		printf("it is an Scalene triangle");
	 } 
	
	
	
}
