#include<stdio.h>

void add(int, int);

int main()

{
	int sum, a=10,b=20; 
	add(a,b);
return 0;
}
void add(int x, int y)
{
	int sum;
	//x =8; y =9;
	sum = x+y;
//	return sum;
	printf("The Sum is %d\n", sum);
//	return sum; 
}
