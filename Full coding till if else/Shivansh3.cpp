#include <stdio.h>

int main() 
{
    int integerNumber;
    char character;
    float floatValue;

    printf("Enter an integer, a character, and a float:");
    scanf("%d %c %f", &integerNumber, &character, &floatValue);

    printf("You entered:\n");
    printf("Integer: %d\n", integerNumber);
    printf("Character: %c\n", character);
    printf("Float: %.2f\n", floatValue);

    return 0;
}
