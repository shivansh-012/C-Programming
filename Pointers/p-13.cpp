//void pointer;

#include <stdio.h>
int main()
/*{
	void *p;
	int a=5;
	float b=7.2;
	p=&a;
	printf("%u\n",p);
	// Error printf("%d\n",*p);
	printf("%d\n",*(int*)p);
	*(int*)p=*(int*)p+7;
	printf("%d\n",*(int*)p);
}*/

{
	void *p;
	int a=5;
	float b=7.2;
	p=&b;
	printf("%f\n",*(float*)p);
	*(float*)p=*(float*)p+7;
	printf("%f\n",*(float*)p);
}

