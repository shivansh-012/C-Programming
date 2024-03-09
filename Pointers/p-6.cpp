//call by reference;

#include <stdio.h>
	void multiply(int *n)
	{
		*n=*n*10;
		printf("%d",*n);
	}
	int main()
	{
		int n;
		scanf("%d",&n);
		multiply(&n);
	}
