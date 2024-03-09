#include <stdio.h>
int main()
{
	int n,i,j;
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
		int sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			sum=sum+j;
		}
		if(sum==i)
		{
			for(j=i;j<n-1;j++)
				A[j]=A[j+1];
			n--;
		}
	}																																																																																																																																																																																																																																																
	printf("Array after deleting the perfect no.s\n");
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
}
