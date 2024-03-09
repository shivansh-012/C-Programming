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
	printf("ORIGINAL ARRAY:\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}
	printf("MATRIX DISPLAYIG ONLY BOUNDARY ELEMENTS:\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
			if(i==0 || i==m-1 || j==0 || j==n-1)
				printf("%d\t",A[i][j]);
			else
				printf("\t");
		printf("\n");
	}
}

