#include <stdio.h>
int main() 
{
    int m,n;
    printf("enter row and column size\n");
    scanf("%d %d",&m,&n);
    int A[m][n],B[m][n],P[m][n],i,j;
    printf("Enter elements of the matrix A:\n");
    for (int i=0;i<m;i++) 
	{
        for (int j=0;j<n;j++)
            scanf("%d", &A[i][j]);
    }
    printf("Enter elements of the matrix B:\n");
    for (i=0;i<m;i++) 
	{
        for (int j=0;j<n;j++)
            scanf("%d", &B[i][j]);
    }
	printf("ARRAY A:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}
	printf("ARRAY B:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",B[i][j]);
		printf("\n");
	}
	printf("ARRAY OF PRODUCT OF ARRAY A AND B:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			{
				P[i][j]=A[i][j]*B[i][j];
				printf("%d\t",P[i][j]);
			}
		printf("\n");
	}
}

