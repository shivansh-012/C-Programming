#include <stdio.h>
int main()
{
	int n,ele,i,j;
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("original array:\n");
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
	printf("enter element whose all occurences u wanna delete\n");
    	scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
		if(A[i]==ele)
    	{
    	A[i]=A[i+1];
    	     n--;
        }
    }
    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++)
        printf("%d \t", A[i]);
    return 0;	
}
