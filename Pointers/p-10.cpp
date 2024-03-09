#include <stdio.h>
int main()
{
	int a=5,*p=&a,b=8,*q=&b;
	printf("%u\n",p);
	printf("%u\n",q);
	if(q>p)
		printf("Hello\n");
	else
		printf("Hi");
}

