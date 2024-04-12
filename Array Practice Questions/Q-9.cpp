#include <stdio.h>
int main()
{
	int n,i,j;
	printf("enter size:\n");
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(A[j]>A[j+1])
			{
				int temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("Array after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
	printf("\nthe largest element is %d",A[n-1]);
}
