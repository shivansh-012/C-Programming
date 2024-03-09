#include <stdio.h>
int main()
{
	int m,n,sum;
	printf("enter row and column size\n");
	scanf("%d %d",&m,&n);
	int A[m][n];
	int i,j,nonzeroes=0,zeroes=0;
	printf("Enter %d elements\n",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&A[i][j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(A[i][j]!=0)
				nonzeroes++;
			if(A[i][j]==0)
				zeroes++;
		}
	}
	float check=(float)2/3*m*n;
	if(nonzeroes>=check)
		printf("dense matrix");
	else if(zeroes>=check)
		printf("sparse matrix");
	else
		printf("neither sparse nor dense matrix");
	}
