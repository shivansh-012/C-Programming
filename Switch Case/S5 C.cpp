#include <stdio.h>
int main()
{
	int A,B;
	printf("enter values of A and B\n");
	scanf("%d %d",&A,&B);
	switch(A>B)
	{
		case 1:printf("%d",A);
		break;
		case 0:switch(B>A)
		{
	    	case 1:printf("%d",B);
	    	break;
	    	case 0:printf("Both are equal");
		}
	}
}
