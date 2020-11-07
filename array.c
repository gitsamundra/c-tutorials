#include<stdio.h>
#include<stdlib.h>

int main()
{
/*	int i = 100;
	int *p; 
	p = &i;
	*p = 200;
	int **q = &p;
	int ***r = &q;
	printf("The Address of p %p\n",p);
	printf("The address of i %p\n", &i);
	printf("The value of p %d\n", *p);
	printf("The value of q %d\n", *(*q));
	printf("The address of r %p\n",**r );
	printf("The value of r %d\n", *(*r));
*/
	int a[5], i;
	for(i=0; i<5; i++)
	{
		printf("%d\n", a[i]);
	}
return 0;
}
