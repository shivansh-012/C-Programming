#include <stdio.h> 
int main()
{
    float bp = 0.75;
    float hours = (1-bp)/0.2;
    printf("Battery power is at 75 percentage after %.2f hours.\n",hours);
    return 0;
}
