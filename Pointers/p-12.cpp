//pointer 2 pointer;

#include <stdio.h>
int main()
{
	int a=5,*p=&a,**q=&p;
	printf("%u\n",p);
	printf("%u\n",q);
	printf("%u\n",&a);
	printf("%u\n",&p);
	printf("%u\n",&q);
	printf("%d\n",*p);
	printf("%d\n",**q);
	int ***r=&q;
	printf("%d\n",***r);
}
