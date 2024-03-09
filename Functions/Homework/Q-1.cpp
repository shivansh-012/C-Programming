//to input a no. and find its factorial;

#include <stdio.h>
int factorial(int);
int main()
{
	int n;
	printf("enter a no.\n");
	scanf("%d",&n);
	printf("factorial of %d is %d",n,factorial(n));
}
int factorial(int n)
{
	int res=1;
	while(n>0)
	{
		res=res*n;
		n--;
	}
	return res;
}

