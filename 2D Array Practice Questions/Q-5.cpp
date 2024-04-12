#include <stdio.h>

int main() 
{
    int m,n;
    printf("enter row and column size\n");
    scanf("%d %d",&m,&n);
    int A[m][n],i,j;
    printf("Enter elements of the matrix:\n");
    for (int i=0;i<m;i++) 
	{
        for (int j=0;j<n;j++)
            scanf("%d", &A[i][j]);
    }
	printf("ORIGINAL ARRAY:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}
    printf("Transposed Matrix:\n");
    for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
            printf("%d\t",A[j][i]);
        printf("\n");
    }
}

