//To check the number is +ve or -ve
#include<stdio.h>
void main()
{	
	float a;
	printf("Enter the number\n");
	scanf("%f",&a);
	if(a>0)
	{
		printf("It is positive\n");
	}
	else if(a<0)
	{
		printf("It is negative\n");
	}
	else
	{
		printf("It is 0\n");
	}
}
