#include <stdio.h>
int main()
{
	int a=5,*p=&a,b=8,*q=&b;
	
	//int a=5,*p=&a,b=8,*q=&b;
	//p++;
	//q--;
	//printf("%u %u",p,q);
	//printf("%u %u %d %d\n",p,q,*p,*q);
	//p=q;
	//printf("%u %u %d %d",p,q,*p,*q);
	printf("%d %d %d %d",--(*p),(*p)--,++(*p),*p++);	
}
