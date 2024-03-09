0#include <stdio.h>
int main()
{
	int n,i,m;
	printf("enter no. students\n");
	scanf("%d",&n);
	int A[n];
	printf("enter roll no.s of %d students\n",n);
	for(i=1;i<=n;i++)
		scanf("%d",&A[i]);
	printf("roll no.s:\n");
	for(i=1;i<=n;i++)
		printf("%d\t",A[i]);
	printf("\nenter the beginning and ending of roll no.s to be printed\n");
	scanf("%d %d",&m,&n);
	printf("roll no,s from %d to %d\n",m,m);
	for(i=m;i<=n;i++)
		printf("%d\t",A[i]);
	}
	
