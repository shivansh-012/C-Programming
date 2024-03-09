#include <stdio.h>
int main()
{ int g1,g2,g3,g4,g5,c1,c2,c3,c4,c5;
printf("enter grade point : ");
scanf("%d %d %d %d %d",&g1,&g2,&g3,&g4,&g5);
printf("enter credits : ");
scanf("%d %d %d %d %d",&c1,&c2,&c3,&c4,&c5);
int SPI=(c1*g1+c2*g2+c3*g3+c4*g4+c5*g5)/(c1+c2+c3+c4+c5);
printf("SPI:%d\n",SPI);
return 0;
}
