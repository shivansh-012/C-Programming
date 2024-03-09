#include <stdio.h>
int main()
{
char c;
scanf("%c", &c);
if ((c>='A' && c <='Z') ||(c>='a' && c<='z'))
printf("alphabet");
else if(c>='0' && c<='9')
printf("Digit");
else
printf("Special Character");
return 0;
}
