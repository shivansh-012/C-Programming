#include <stdio.h>
int main()
{
	int A[3][3],i,j;
	printf("Enter 9 elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&A[i][j]);
	}
	printf("Original Array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",A[i][j]);
		printf("\n");
	}
    float det=A[0][0]*(A[1][1]*A[2][2]-A[2][1]*A[1][2]) - A[0][1]*(A[1][0]*A[2][2]-A[2][0]*A[1][2]) + A[0][2]*(A[1][0]*A[2][1]-A[2][0]*A[1][1]);
    printf("The determinant is %.2f",det);
}

