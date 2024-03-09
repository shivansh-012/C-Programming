//to input cp,mp,cp of a product and check whether u have made profit or not;

#include <stdio.h>
void check(float CP,float MP,float SP)
{
	if(SP>CP+MP)
		printf("PROFIT made is %f",SP-CP+MP);
	else if(SP<CP+MP)
		printf("LOSS made is %f",CP+MP-SP);
	else
		printf("No PROFIT No LOSS");
}
int main()
{
	float CP,MP,SP;
	printf("Enter CP,MP and SP\n");
	scanf("%f %f %f",&CP,&MP,&SP);
	check(CP,MP,SP);
}

