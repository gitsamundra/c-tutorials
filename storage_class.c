#include<stdio.h>
//extern int e;
int main()
{
	auto int a;
	extern int n;
	register int r;
	static int s;
	printf("The value of auto int %d\n", a);
	//printf("The value of external int %d\n", n);
	printf("The value of register int %d\n", r);
	printf("The value of static int %d\n", s);
return 0;
}
