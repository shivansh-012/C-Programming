#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,sum=0;
	float mean,sum1=0;
	    scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	    scanf("%d",&A[i]);
	for(i=0;i<n;i++)
		sum=sum+A[i];
	mean=(float)sum/n;
	for(i=0;i<n;i++)
	    sum1=sum1+pow(A[i]-mean,2);
	printf("standard deviation = %f",sqrt(sum1/n));
}

