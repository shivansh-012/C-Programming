#include <stdio.h>
int main()
{
	float *p;
	float a=14.75;
	p=&a;
	printf("%f\n",a);
	printf("%u\n",p);
	printf("%u\n",&a);
	printf("%u\n",&p);
	printf("%f\n",*p);
	*p=*p+7;
	printf("%f\n",*p);
	printf("%lu\n",sizeof(p));
}
