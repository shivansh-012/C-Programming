#include <stdio.h>
int main()
{
float dinkm, speed;
printf("Enter the distance in kilometers between GLA University and Delhi: ");
scanf("%f",&dinkm);
speed = dinkm/4.0;
printf("The speed of the bus is %.2f km/hour\n", speed);
return 0;
}
