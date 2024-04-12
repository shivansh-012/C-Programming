#include <stdio.h>
int main()
{
    int n,i,votes_trump=0,trump_count,votes_biden=0,biden_count;
	scanf("%d",&n);
	printf("Enter votes of trump in %d states;\n",n);
	int T[n],B[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&T[i]);
    	votes_trump=votes_trump+T[i];
	}
	printf("Enter votes of trump in %d states;\n",n);	
    for(i=0;i<n;i++)
	{
		scanf("%d",&B[i]);
	    votes_biden=votes_biden+B[i];
	}    
	for(i=0;i<n;i++)
	{
		if(T[i]>B[i])
		    {
		    	trump_count++;
		    	printf("trump won in state %d\n",i+1);
			}
		else if(B[i]>T[i])
			{
				biden_count++;
				printf("biden won in state %d\n",i+1);
			}
		else
			printf("trump and biden got same votes in state %d\n",i+1);
	}
	if(trump_count>biden_count)
	    printf("trump won in more states so he is the winner\n");
	else if(biden_count>trump_count)
	    printf("biden won in more states so he is the winner\n");
	else
		printf("trump and biden won in equal no. of states\n");
	if(votes_trump>votes_biden)
	    printf("trump is overall winner\n");
	else if(votes_biden>votes_trump)
	    printf("biden is overall winner\n");
	else
		printf("No one is overall winner\n");
}
