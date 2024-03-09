//to find factorial of a number using function of :no return type no argument;

/*#include <stdio.h>
void factorial()
{
	int n,res=1;
	printf("enter a no.\n");
	scanf("%d",&n);
	while(n>0)
	{
		res=res*n;
		n--;
	}
	printf("factorial is %d",res);
}
int main()
{
	factorial();
}*/

//no return type with argument;

/*#include <stdio.h>
void factorial(int n)
{
	int res=1;
	while(n>0)
	{
		res=res*n;
		n--;
	}
	printf("factorial is %d",res);
}
int main()
{
	int n;
	printf("enter size\n");
	scanf("%d",&n);
	factorial(n);
}*/

//return type with no argument; 

/*#include <stdio.h>
int factorial()
{
	int n,res=1;
	printf("enter size\n");
	scanf("%d",&n);
	while(n>0)
	{
		res=res*n;
		n--;
	}
	return res;
}
int main()
{
	int f=factorial();
	printf("factorial is %d",f);
}*/

//return type with argument;

#include <stdio.h>
int factorial(int);
int main()
{
	int n;
	printf("enter a no.\n");
	scanf("%d",&n);
	printf("factorial of %d is %d",n,factorial(n));
}
int factorial(int n)
{
	int res=1;
	while(n>0)
	{
		res=res*n;
		n--;
	}
	return res;
}
