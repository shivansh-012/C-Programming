#include <stdio.h>
int main()
{ float speed_kmph= 4.0,time_min= 3.0;
float time_hr = time_min/60.0;
float distance_km = speed_kmph * time_hr;
printf("Distance traveled by you: %.2f kms\n", distance_km);
return 0;
}
