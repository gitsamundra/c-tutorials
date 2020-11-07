#include<stdio.h>
int main()
{
	int a[5] = {23, 34, 12, 45, 23};
	int i; 
	int large = a[0];
	for(i=1; i<5; i++)
	{
		if(a[i] > large)
		{
			large = a[i];
		}
	}
	printf("The biggest number is %d\n", large);
return 0;
}
