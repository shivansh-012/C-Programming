//sum of pointers;

#include <stdio.h>
int main()
{
	int a,b,s,*pa=&a,*pb=&b,*ps=&s;
	scanf("%d %d",pa,pb);
	*ps=*pa+*pb;
	printf("sum of pointers = %d",*ps);
}

