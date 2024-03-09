#include <stdio.h>
int main()
 {
int n, sum=0;
printf("Enter rollno:");
scanf("%d", &n);
sum=sum+n%10;
n=n/10;
sum=sum+n%10;
n=n/10;
sum=sum+n%10;
n=n/10;
sum=sum+n%10;
printf("Sum is: %d", sum);
return 0;
}

