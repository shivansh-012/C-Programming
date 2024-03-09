#include <stdio.h>
int main()
{
	int a=5;
	int *p=&a;
	printf("%u\n",p);
	printf("%u\n",p+1);
	printf("%u\n",p+5);
	printf("%u\n",p-1);
	printf("%u\n",p-4);
	// ERROR printf("%u\n",p*2);
	// ERROR printf("%u\n",p/2);
	// ERROR printf("%u\n",p%2);
}

