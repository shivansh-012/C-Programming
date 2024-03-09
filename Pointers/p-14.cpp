//passing array to function;

#include <stdio.h>
void function(int *A,int n)
{
	for(int i=0;i<n;i++)
		printf("%d\t",*(A+i));
}
int main()
{
	int n;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	int A[n];
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
	function(A,n);
}

