#include <stdio.h>
int main()
{
	int A[10],i,j;
	for(i=0;i<10;i++)
		scanf("%d",&A[i]);
	for(i=0;i<10;i++)
	{
		if(A[i]==-1)
		continue;
		if(A[i]>60)	
		{
			int frequency=1;
			for(j=i+1;j<10;j++)
			{
				if(A[i]==A[j])
				{
					frequency++;
					A[j]=-1;
				}
			}
			printf("Frequency of %d is %d\n",A[i],frequency);
		}
	}	
}
