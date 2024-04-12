#include <stdio.h>
int main()
{int n,i,pos;
scanf("%d",&n);
int A[n];
printf("enter %d elements\n",n);
for(i=0;i<n;i++)
	scanf("%d",&A[i]);
for(i=0;i<n;i++)
	printf("%d\t",A[i]);
printf("\nenter position of element u wanna del.\n");
scanf("%d",&pos);
for(i=pos-1;i<n;i++)
	{
		int temp=A[i];
		A[i]=A[i+1];
		A[i+1]=temp;
	}
	n--;
	for(i=0;i<n;i++)
	printf("%d\t",A[i]);
}
