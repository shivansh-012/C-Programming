#include <stdio.h>
int main() 
{
    int m,n;
    printf("enter size for a square matrix\n");
    scanf("%d",&m);
    n=m;
    int A[m][n],i,j;
    printf("Enter elements of the matrix:\n");
    for (int i=0;i<m;i++) 
	{
        for (int j=0;j<n;j++)
            scanf("%d",&A[i][j]);
    }
    printf("ORIGINAL ARRAY:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}
    int isidentity=1;
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				if(A[i][j]!=1)
				{
					isidentity=0;
					break;
				}	
			}
			else
			{
				if(A[i][j]!=0)
				{
					isidentity=0;
					break;
				}
			}
		}
		if(isidentity==0)
			break;
	}
	if(isidentity==1)
		printf("IDENTITY MATRIX");
	else
		printf("NOT A IDENTITY MATRIX");
}

