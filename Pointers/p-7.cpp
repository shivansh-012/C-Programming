//swaping two no.s by call by reference;

#include <stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
	printf("swapping = %d %d",*a,*b);
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
}
