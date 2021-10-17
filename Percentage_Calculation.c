#include<stdio.h>
#include<math.h> //this header is used for getting all maths function
int main()
{
	float maths ,science ,english;
	float sum=0;
	float percentage;
    
	
	printf("enter the marks of maths :");
	scanf("%f",&maths);
	printf("enter the marks of science:");
	scanf("%f",&science);
	printf("enter the marks of english:");
	scanf("%f",&english);
	
	sum = maths+science+english;
	printf("The Total Markes %f",sum);
	printf("\n"); //for next execute in next line
	percentage=(sum/300)*100;
	
	printf("total percentage :%f",round(percentage)); // round is used for getting a number in a round figure 
	



	}
