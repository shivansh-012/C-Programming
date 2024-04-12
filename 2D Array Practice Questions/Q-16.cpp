#include <stdio.h>
int main()
{
	int m,n;
	printf("enter row and column size\n");
	scanf("%d %d",&m,&n);
	int A[m][n];
	int i,j;
	printf("Enter %d elements\n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&A[i][j]);
	}
	printf("original array:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}
	printf("array in zig zag form:\n");
	for(i=0;i<m;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<n;j++)
			printf("%d\t",A[i][j]);
		}
		else
		{
			for(j=n-1;j>=0;j--)
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}

