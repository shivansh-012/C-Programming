#include <stdio.h>
int main() 
{
    int m,n;
    printf("enter size for a square matrix\n");
    scanf("%d",&m);
    n=m;
    int A[m][n],i,j,sum=0;
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
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			sum=sum+A[i][j];
		}
	}
	printf("Sum of diagonal elements is %d",sum);
}

