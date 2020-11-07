#include<stdio.h>
int add(int a, int b)
{
	int c = a + b;
	return c;
//	printf("The sum is %d\n", c);
}

int main()
{
	int (*p)(int, int);
	int x=10, y=50, r;
	p = &add;
	r = p(x,y);
	printf("The sum is %d\n", r);
return 0;
}
