//to input two integers and add them using functions;

#include <stdio.h>
int add(int,int);
int main()
{
	int x,y,sum;
	printf("enter two no.s\n");
	scanf("%d %d",&x,&y);
	printf("sum = %d\n",add(x,y));
}
int add(int x,int y)
{
	int sum=x+y;
	return sum;
}

