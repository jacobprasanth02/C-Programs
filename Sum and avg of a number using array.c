//to find sum and avg of a number using array
#include <stdio.h>
void main()
{
	int n,i,k ;
	float avg=0,sum=0;
	printf("Enter total numbers");
	scanf("%d",&i);
	int num[i];
	for(n=0;n<i;n++)
	{
		printf("Enter your numbers");
		scanf("%d",&num[n]);
	}
	for(k=0;k<i;k++)
	{	
		sum=sum+num[k];
	}
	avg=sum/i;
	printf("Sum is %f\n",sum);
	printf("Avg is %f\n",avg);
}
