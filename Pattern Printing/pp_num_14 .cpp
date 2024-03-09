/* print the ff num pattern:-

2
23
234
2345
23456

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
		printf("%d",j+1);
		printf("\n");
	}
}
