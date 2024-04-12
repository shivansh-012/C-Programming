#include <stdio.h>
int main() 
{
    int m,n;
    printf("enter size for a square matrix\n");
    scanf("%d",&m);
    n=m;
    int A[m][n],i,j;
    printf("Enter %d elements of the matrix:\n",m*n);
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
	printf("Upper Triangular Matrix:\n");
    for(int i=0;i<m;i++) 
	{
        for(int j=0;j<n;j++) 
		{
            if(j>=i)
				printf("%d\t",A[i][j]);
            else
                printf("0\t");
    	}
    	printf("\n");
    }
}

