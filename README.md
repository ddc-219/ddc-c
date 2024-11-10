#include <stdio.h>
int main()
{
	int n,m,a,b,c;
	char fx;
	scanf("%d\n%c",&n,&fx);
	if (fx=='y')
	{
		for (m=1;m<=n;m++)
		{
			for (a=n-m;a>0;a--)
				printf(" ");
			for (b=2*m-1;b>0;b--)
				printf("*");
			for (c=2*(n-m);c>0;c--)
				printf(" ");
			for (b=2*m-1;b>0;b--)
				printf("*");
			printf("\n");	
		}	
	}
	
	else if (fx=='x')
	{
		for (m=1;m<=n;m++)
		{
			for (a=n-m;a>0;a--)
				printf(" ");
			for (b=2*m-1;b>0;b--)
				printf("*");
			printf("\n");
		}
		for (m=n;m>0;m--)
		{
			for (a=n-m;a>0;a--)
				printf(" ");
			for (b=2*m-1;b>0;b--)
				printf("*");
			printf("\n");
		}
	}
	return 0;
}
