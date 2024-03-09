#include <stdio.h>
int main()
{
	int n;
	printf("enter a no.\n");
	scanf("%d",&n);
	switch(n%2==0)
	{
		case 1:printf("no. is even");
		break;
		case 2:printf("no. is odd");
	}
}
