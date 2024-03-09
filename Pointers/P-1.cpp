#include <stdio.h>
int main()
{
	int *p;
	int a=5;
	p=&a;
	printf("%d\n",a);
	printf("%u\n",p);
	printf("%u\n",&a);
	printf("%d\n",*p);
	printf("%d\n",*p+7);
}

