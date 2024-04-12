#include <stdio.h>
int main()
{
	int m,n;
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
}

