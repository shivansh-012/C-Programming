#include <stdio.h>
int main()
{
char c;
scanf("%c", &c);
switch(c)
{
	case 'A' ...'Z':
	case 'a' ...'z':printf("alphabet");
	break;
	case '0' ...'9':printf("Digit");
	break;
	default:printf("Special Character");
	return 0;
}
}
