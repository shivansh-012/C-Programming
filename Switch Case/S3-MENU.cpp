#include <stdio.h>
int main()
{
int A, B, C;
printf("MENU\n1.Add\n2.Subtract\n3.Multiply\n4. Divide\n5.Modulus\n");
printf ("Enter 2 no.s\n");
scanf ("%d %d",&A,&B);
printf("Enter your choice"); 
scanf("%d",&C);
switch(C)
{
case 1:printf("sum=%d",A+B);
break;
case 2:printf("difference=%d",A-B);
break;
case 3:printf("Product=%d",A*B);
break;
case 4:printf("Quotient=%d",A/B);
break;
case 5: printf("Remainder=%d",A%B);
break;
default:printf("Invalid Choice");
}
}
