#include <stdio.h>
int main()
{
	int n,e,i,j;
	printf("enter size:\n");
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("enter no. of elements u wanna insert:\n");
	scanf("%d",&e);
	int E[e],P[e];
	printf("enter %d elements and their positon u wanna insert\n",e);
	for(i=0;i<n;i++)
		scanf("%d %d",&E[i],&P[i]);
	for(i=0;i<n;i++)
	{
		for(j=P[i];j<n-1;j++)
			A[j+1]=A[j];
	A[P[i]]=E[i];
	n++;
	}
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
}
