#include <stdio.h>
int power(int,int);
int main()
{
	int x,n;
	printf("enter a no. and its power\n");
	scanf("%d %d",&x,&n);
	printf("%d ki power %d is = %d",x,n,power(x,n));
}
int power(int x,int n)
{
	int result=1;
	while(n>0)
	{
		result=result*x;
		n--;
	}
	return result;
}

