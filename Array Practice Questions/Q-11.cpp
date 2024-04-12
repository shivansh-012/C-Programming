#include <stdio.h>
int main()
{
	int n,i,min=0,max=0;
	printf("enter size:\n");
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	for(i=1;i<n;i++)
	{
		if(A[i]<A[min])
			min=i;
		if(A[i]>A[max])
			max=i;
	}
	int temp=A[min];
	A[min]=A[max];
	A[max]=temp;
	printf("sorted array after swapping the smallest and the largest element:\n");
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
}
