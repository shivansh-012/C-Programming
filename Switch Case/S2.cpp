#include<stdio.h>
int main()
{
    char x;
    printf("enter a no.");
    scanf("%c",&x);
    switch(x)
    {
		case '1':printf("Hi");
        break;
        case 25*2:printf("Hello");    
        break;
        case '3':printf("Hey");
        break;    
        case '4':printf("section-AN");    
        break;    
        case 50+3:printf("GLA");    
        break;
        default:printf("Bye");
        break;           
    }
}

