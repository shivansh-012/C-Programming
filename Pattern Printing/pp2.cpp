/* wap TO PRINT THE FF STAR PATTERN FOR A GENERALIZED VALUE OF N:-
    
   *
  **
 ***
****
 
the above pattern is for n=4 */

#include <stdio.h>
int main()
{
	int n;
	printf("enter the value of n\n");
	scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n-1-i;j++)
    		printf(" ");
    	for(int k=0;k<=i;k++)
    		printf("*");
		printf("\n");
	}
}
	


