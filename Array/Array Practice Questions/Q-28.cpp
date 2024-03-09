#include <stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter size\n");
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("Original Array\n");
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(A[i]==A[j])
			{
				A[j]=A[j-1]	;			
				//for(k=j;k<n-1;k++)
				//A[k]=A[k+1];
				n--;
			}
		}
	}
	printf("\nArray after deleting duplicate elements\n");
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
}
