// to input an array of n no. of elements anf find their sum and average;

#include <stdio.h>
int main()
{
    int n,i,sum=0;
    float avg;
    printf("enter size\n");
    scanf("%d",&n);
    int A[n];
	printf("enter %d elements\n",n);
	for(i=0;i<=n-1;i++)
	{
	    scanf("%d",&A[i]);  
        sum=sum+A[i];
    }
	printf("sum=%d and average=%f",sum,(float)sum/n);
}  
	
