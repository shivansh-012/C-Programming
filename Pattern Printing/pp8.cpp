/* to print the following pattern:-

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    
*/
    
#include <stdio.h>
int main()
{
	int n;
	printf("enter the value of n\n");
	scanf("%d",&n);
    for(int i=1;i<=n;i++)
	{
		for(int space=1;space<=n-i;space++)
		printf(" ");
		for(int j=1;j<=2*i-1;j++)
		printf("*");
		printf("\n");
    }
    for(int i=n-1;i>=1;i--)
	{
		for(int space=1;space<=n-i;space++)
		printf(" ");
		for(int j=1;j<=2*i-1;j++)
		printf("*"); 
		printf("\n");
    }
}
