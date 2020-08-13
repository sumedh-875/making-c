#include<stdio.h>
int main()
{
	double a,b;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("after swapping,a=%d\n",a);
	printf("after swapping,a=%d\n",b);
	return 0;
}
