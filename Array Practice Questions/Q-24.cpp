#include <stdio.h>
int main()
{
	int n,i,ele,frequency=0;
	printf("enter size\n");
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("enter element whose frequency is to be counted\n");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
		{
			if(A[i]==ele)
				frequency++;
		}
	printf("the frequency of element %d in the array is %d",ele,frequency);	
}
