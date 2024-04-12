#include <stdio.h>
int main()
{
	int n,i,j,temp;
	printf("enter size:\n");
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	printf("array sorted in ascending order:\n");
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
}
