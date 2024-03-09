/*print the ff star pattern,the no. of lines in the pattern should be equal to the value entered by the user.The pattern looks like this for n=4:-

*
**
***
**** 

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
		{
		    printf("*");
	    }
	printf("\n");
    }
}
