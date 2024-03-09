#include <stdio.h>
#include <math.h>
void check_real_or_imaginary(int a,int b,int c)
{
	if(b*b-4*a*c>0)
		printf("roots of a quadratic equation are real and unequal");
	else if(pow(b,2)-4*a*c<0)
		printf("roots of a quadratic equation are imaginary");
	else
		printf("roots of a quadratic equation are real and equal");
}
int main()
{
	int a,b,c;
	printf("enter the three coefficient of a quadratic equation\n");
	scanf("%d %d %d",&a,&b,&c);
	check_real_or_imaginary(a,b,c);
}

