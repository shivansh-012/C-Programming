/* print the ff alpha pattern:-

A
AB
ABC
ABCD
ABCDE

*/

#include <stdio.h>
int main()
{
	int n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		printf("%c",64+j);
		printf("\n");
	}
}
