#include <stdio.h>
int billing(int);
int main()
{
	int meal_cost;
	printf("enter meal cost\n");
	scanf("%d",&meal_cost);
	printf("the total bill is %d",billing(meal_cost));
}
int billing(int meal_cost)
{
	int total_bill=(meal_cost/100*20+meal_cost)/100*15+meal_cost/100*20+meal_cost;
	return total_bill;
}

