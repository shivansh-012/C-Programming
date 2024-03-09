#include<stdio.h>
int array(int*,int);
int i,s;
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	printf("enter size\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int z=array(a,n);
	printf("the sum is= %d",z);
}
int array(int *a,int k)
{
	for(i=0;i<k;i++)
	{
		s=s + *(a+i);
	}
	return(s);
}
