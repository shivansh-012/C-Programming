/* print the ff num pattern:-

1
22
333
4444
55555

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
		printf("%d",i);
		printf("\n");
	}
}
