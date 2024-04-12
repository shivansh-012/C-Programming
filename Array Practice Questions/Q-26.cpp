-/*WAP to input an array of N number of elements . Traverse this array from starting to end , 
if element found is prime then convert it into palindrome number next to it and if its not prime(composite) 
then convert it into next Armstrong number. print the updated array.*/

#include <stdio.h>
int main()
{
	int n,i;
	printf("enter size\n");
	scanf("%d",&n);
	int A[n];
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
