#include <stdio.h>
int main()
{
	int n,ele,f=0,i;
	printf("enter size:\n");
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("enter element you want to search\n");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(A[i]==ele)
		{
			printf("%d found at %dth position\n",ele,i+1);
			f=1;
		}
	}
	if(f==0)
		printf("%d not found.\n",ele);
}
