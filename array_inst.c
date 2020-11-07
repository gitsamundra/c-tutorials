#include<stdio.h>
int main()
{
/*	int a[4] = {10, 20, 30, 40};
	int i;
	for(i=3; i>=1; i--)
	{
		a[i+1]=a[i];
	}
		a[1]=100;
	for(i=0; i<=4; i++)
	{
		printf("%d\n", a[i]);
	}*/
//=========================

	int i, a[5]={10, 20, 30, 40, 50}, b[3]={100, 200, 300};
	for(i=4; i>=2; i--)
	{
		a[i+3] = a[i];
	}
	for(i=0; i<3; i++)
	{
		a[2+i] = b[i];
	}
	for(i=0; i<7; i++)
	{
		printf("%d\n", a[i]);
	}
return 0;
}
