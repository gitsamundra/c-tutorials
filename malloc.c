#include<stdio.h>
#include<stdlib.h>
/*struct Employee {
	int eno;
	char ename[20];
	float esal;
};*/
int main()
{
/*	struct Employee E;
	int i;
	void *P= malloc(sizeof(int));
	printf("%p\n", P);
	printf("The size of Employee is %lu\n", sizeof(struct Employee));

	int a[5] = {10, 20, 30, 40, 50};
	int *ptr = a;	
	printf("%d\n", *++ptr+3);
	printf("%d\n", *(ptr-- +2)+5);
	printf("%d\n", *(ptr+3)-10);
*/
	int i, n; 
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int *A = (int*)calloc(n,sizeof(int));
	for(i=0; i<=n; i++)
	{
		A[i] = i+5;
	}
	int *B = (int*)realloc(A, 2*n*sizeof(int));
	for (i=0; i<=2*n; i++)
	{
		printf("%d\n", *(A+i));
	}
return 0;
}
