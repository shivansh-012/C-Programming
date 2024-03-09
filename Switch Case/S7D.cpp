#include <stdio.h>
int main()
{
    char c;
	scanf("%c",&c);
	switch(c)
	{
	    case 'A' ... 'Z':c=c+32;
		break;
		case 'a' ... 'z':c=c-32;
    }
    printf("%c",c);
}

