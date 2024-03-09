#include <stdio.h>
void check(int year)
{
	if(year%4==0)
	{
		if(year%100==0 && year%400!=0)
			printf("not a leap year");
		else
			printf("leap year");
	}
	else
		printf("not a leap year");
}
int main()
{
	int year;
	printf("enter year\n");
	scanf("%d",&year);
	check(year);
}

