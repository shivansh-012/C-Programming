/* print the ff alpha pattern:-

ABCDE
ABCD
ABC
AB
A

*/

#include <stdio.h>
int main()
{
	int n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		printf("%c",64+j);
		printf("\n");
	}
}
