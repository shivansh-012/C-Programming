#include <stdio.h>
int main()
{
    int n,i;
    printf("enter size\n");
    scanf("%d",&n);
	int A[n];
	printf("enter five values\n");
	for(i=0;i<n;i++)
	    scanf("%d",&A[i]);
	for(i=0;i<5;i++)
     	printf("%d\t",A[i]);
}
