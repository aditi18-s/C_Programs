#include<stdio.h>
#include<math.h>

int main()
{
	float math,english,basicelectrical,chemistry,electronic;
	float cgpaofsem2;
	float sum=0;
	
	printf("enter the marks of math:");
	scanf("%f",&math);
	printf("enter the marks english:");
	scanf("%f",&english);
	printf("enter the marks of basicelectrical:");
	scanf("%f",&basicelectrical);
	printf("enter the marks of chemistry:");
	scanf("%f",&chemistry);
	printf("entre the marks of electronic:");
	scanf("%f",&electronic);
	 
	 sum=math+english+basicelectrical+chemistry+electronic;
	 
	printf("total marks obtained:%f",sum);
	printf("\n");
	
	cgpaofsem2=(sum/500)*10;
	
	printf("total cgpa obtained in semester 2:%f",cgpaofsem2);
	printf("\n");
	
	 if(cgpaofsem2==10)
	{
	    printf("O");
	}
	else if(cgpaofsem2 >=9 && cgpaofsem2<10)
	{
		printf("E");
	}
	else if(cgpaofsem2 >=8 && cgpaofsem2<9)
	{
		printf("A");
	}
	 else if(cgpaofsem2 >=7 && cgpaofsem2<8)
	{
		printf("B");
	}
	else if(cgpaofsem2 >=6 && cgpaofsem2<7)
	{
		printf("C");
	}
	else if(cgpaofsem2 >=5 && cgpaofsem2<6)
	{
		printf("D");
	}
	else
	{
		printf("FAIL");
	}
}
