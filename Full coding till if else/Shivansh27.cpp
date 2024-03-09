#include <stdio.h>
int main()
{
     int age;
     int votingage=18;
     printf("enter your age\n");
     scanf("%d",&age);
     if(age>=votingage)
        printf("you are eligible to vote\n");
	 else   
        {   int yearsleft=votingage-age;
            printf("you are not elgible to vote.you can vote in %d years",yearsleft);
        }
     return 0;
}
