// to input an array of n no. of elements and count the total no. of positives,negatives,zeroes;
 
#include <stdio.h>
int main()
{
	int n,i,P=0,N=0,Z=0;
	printf("enter size\n");
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements\n",n);
	for(i=0;i<=n-1;i++)
	{    scanf("%d",&A[i]);
	     if(A[i]>0)
	     P++;
	     else if(A[i]<0)
	     N++;
	     else
	     Z++;
	}
	printf("no. of positive no.s=%d,negative no.s=%dand zeroes=%d",P,N,Z);
}
