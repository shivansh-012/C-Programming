#include <stdio.h>
void average(int *A,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
		sum=sum+*(A+i);
	printf("%f",(float)sum/n);
}
int main()
{
	int n;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	int A[n];
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
	average(A,n);
}

