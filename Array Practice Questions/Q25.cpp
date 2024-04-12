#include <stdio.h>
int main()
{
	int n,i,j,ele,frequency;
	printf("enter size\n");
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	{
		if(A[i]==-1)
		continue;
		frequency=1;
		for(j=i+1;j<n;j++)
		{
			if(A[i]==A[j])
			{
				frequency++;
			    A[j]=-1;
			}			
		}
		printf("the frequency of element %d in the array is %d\n",A[i],frequency);	
	}
}
