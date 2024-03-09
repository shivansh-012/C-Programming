/*
Suppose array is                       4	5	3	9	1
After left rotation by 1 it will be	   5	3	9	1	4
*/

#include <stdio.h>
int main()
{
	int n,i;
	printf("enter size\n");
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("Original Array\n");
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
	int temp=A[0];
	for(i=0;i<n;i++)
		A[i-1]=A[i];
	A[n-1]=temp;
	printf("Array after Left Rotation by 1:\n");
    for (int i = 0; i < n; i++)
        printf("%d \t", A[i]);
    return 0;	
}
