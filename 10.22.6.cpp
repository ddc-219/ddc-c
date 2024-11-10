#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,sjx;
	scanf("%d%d%d",&a,&b,&c);
	d= a+b>c;
	e= a+c>b;
	f= b+c>a;
	sjx=0;
	if (d&&e&&f)
	sjx=1;
	printf("%d",sjx);
	return 0;
}
