#include<stdio.h>

void cube(int n)
{
	printf("cube of N = %d",n*n*n);
}

void main()
{
	int n;
	printf("Enter value of N =");
	scanf("%d",&n);
	cube(n);
}