#include <stdio.h>
int main()
{
	char *p;
	char a='B';
	p=&a;
	printf("%d\n",a);
	printf("%c\n",a);
	printf("%u\n",p);
	printf("%u\n",&a);
	printf("%u\n",&p);
	printf("%d\n",*p);
}

