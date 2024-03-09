#include<stdio.h>
int main()
{
	int a,b;
	a=10;
	b=5;
	int *a1,*b1;
	a1=&a;
	b1=&b;
	int c;
	c=*a1;
	*a1=*b1;
	*b1=c;
	printf("%d",a);
	printf("%d",b);
}
