#include <stdio.h>
int main()
{
	char S[100];
	//scanf("%s",S); for single word
	scanf("%[^\n]",S);
	printf("%s",S);
}
