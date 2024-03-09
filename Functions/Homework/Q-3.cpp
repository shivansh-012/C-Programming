//to input a no. and find its reverse;

#include <stdio.h>
int rev(int);
int main()
{
	int n;
	printf("enter a no.\n");
	scanf("%d",&n);
	printf("reverse of %d is %d",n,rev(n));
}
int rev(int n)
{
	int result=0;
	while(n>0)
	{
		result=result*10+n%10;
		n=n/10;
	}
	return result;
}

