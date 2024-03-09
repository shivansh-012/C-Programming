#include <stdio.h>
int main()
{
float u=0.0,a=4.0,t=3.0;
float v=u+a*t;
float s=u*t+0.5*a*t*t;
printf("Final Velocity: %.2f m/s \n",v);
printf("Distance Travelled: %.2f m \n",s);
return 0;
}
