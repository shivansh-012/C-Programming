#include <stdio.h>
int main()
{   float tanksize=175.0;
    float drainagerate=25.0;
    float timereq=tanksize/drainagerate;
    printf("Time required: %.2f hrs\n",timereq);
    return 0;
}
