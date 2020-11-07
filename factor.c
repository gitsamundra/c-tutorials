#include<stdio.h>
int square(int x){
	return x*x;
}
int SumOfSquare(int x, int y){
	int z = square(x+y);
	return z;
}
int main()
{
	int a = 3, b = 4;
	int result = SumOfSquare(a, b);
	printf("The result = %d\n", result);
return 0;
}
