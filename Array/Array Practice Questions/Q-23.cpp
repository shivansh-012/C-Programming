/*
Suppose array is                        4   5   3   9	1
After right rotation by 1 it will be		1   4   5   3   9     
*/

#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("Original Array\n");
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
	int temp=A[n-1];
	for (int i=n-1;i>=0;i--)
		A[i+1]=A[i];
	A[0]=temp;
	printf("Array after Right Rotation by 1:\n");
    for(i=0;i<n;i++)
		printf("%d \t", A[i]);
    return 0;	
}
