#include <stdio.h>
int main()
{
	int m,n,sum=0;
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
			sum=sum+A[i][j];
	}
	printf("sum = %d & average = %f",sum,(float)sum/(m*n));
}

