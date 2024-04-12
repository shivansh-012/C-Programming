#include <stdio.h>
int main()
{
	int n,i,ele,pos;
	printf("enter size:\n");
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("enter the element to be placed at index\n");
	scanf("%d %d",&ele,&pos);
	//for(i=pos-1;i<n;i++)
		//A[i+1]=A[i];
	for(i=n;i>pos;i--)
		A[i]=A[i-1];
	A[pos]=ele;
	n++;
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
}
