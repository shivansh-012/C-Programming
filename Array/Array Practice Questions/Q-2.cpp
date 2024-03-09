// to input an array of n no. of elements and display them as an array in reverse order(general form);

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
	printf("Array is given by :\n");
	for(i=0;i<n;i++)
	printf("%d\t",A[i]);
	//in reverse order
	printf("\nArray in reverse order :\n");
	for(i=n-1;i>=0;i--)
	printf("%d\t",A[i]);
}
