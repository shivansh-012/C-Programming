// prime no.s between 2 and 50;

#include <stdio.h>
int main() 
{
    int i,j;
    for(i=2;i<=50;i++)
    {
    	int sum=0;
    	for(j=2;j<=i;j++)
    	{
    		if(i%j==0)
			sum=sum+1;
		}
		if(sum==1)
		printf("%d  ",i);  
	}
      
}
