#include <stdio.h>
int main()
{
	int m,n,sum;
	printf("enter row and column size\n");
	scanf("%d %d",&m,&n);
	int A[m][n];
	int i,j;
	printf("Enter %d elements\n",m*n);
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		scanf("%d",&A[i][j]);
	}
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}
	for(i=0;i<=m-1;i++)
	{
		sum=0;
		for(j=0;j<=n-1;j++)
			sum=sum+A[i][j];
	printf("sum of row %d = %d\n",i+1,sum);
	}
	for(j=0;j<=n-1;j++)
	{
		sum=0;
		for(i=0;i<=m-1;i++)
			sum=sum+A[i][j];
	printf("sum of column %d = %d\n",j+1,sum);
	}
}

