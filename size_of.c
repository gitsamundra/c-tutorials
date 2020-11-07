#include<stdio.h>
void Increment(int a)
{
	a +=1;
	printf("The incremented value of a is %d\n", a);
};
int main()
{
	int x = 10;
	Increment(x);
return 0;
}
