#include <stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter two number\n");
	scanf("\n%d\n%d",&a,&b);
	printf("Entered numbers are:%d,%d",a,b);
	swap(&a,&b);
	return 0;
}
void swap(int* a,int* b)
{	
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("\nSwaped numbers are:%d,%d\n",*a,*b);
}
