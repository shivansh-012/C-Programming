#include <stdio.h>
int main()
{
	int a=5,*p=&a,b=8,*q=&b;
	printf("%d\n",q-p);
	printf("%d\n",(int*)300-(int*)100);
	printf("%u\n",p-q);
	printf("%d\n",(int*)303-(int*)200);
	printf("%d\n",(double*)800-(double*)100);
}

