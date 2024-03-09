#include <stdio.h>
int main()
{
	int a=2053;
	char *p;
	p=(char*)&a;
	printf("%d\n",a);
	printf("%u\n",p);
	printf("%u\n",&a);
	printf("%u\n",&p);
	printf("%d\n",*p);
	printf("%d\n",*(int*)p);
}
