//to input an array of n no. of elements and store all the even and odd no.s in different arrays respectively;

#include <stdio.h>
int main()
{
int n,i,j,k;
printf("enter size\n");
scanf("%d",&n);
int A[n],E[n],O[n];
printf("enter %d elements\n",n);
for(i=j=k=0;i<n;i++)
{
	scanf("%d",&A[i]);
	if(A[i]%2==0)
	    E[j++]=A[i];
	else
	    O[k++]=A[i];
}
//even	
printf("Array for even no.s:\n");
for(i=0;i<j;i++)
	printf("%d\t",E[i]);
//odd
printf("\nArray for odd no.s:\n");
for(i=0;i<k;i++)
	printf("%d\t",O[i]);
}
