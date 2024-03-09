#include <stdio.h>
int main()
{
float height=175.0,weight=70.0,H_ft,W_pounds;
const float cmtoinch=0.393701;
const float kgtolb=2.20462;
H_ft=(height * cmtoinch)/12;
W_pounds=(weight*kgtolb);
printf(" Height in feet: %.2f feet \n",H_ft);
printf(" Weight in pounds: %.2f pounds \n",W_pounds);
return 0;
}
