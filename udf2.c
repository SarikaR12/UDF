#include<stdio.h>

void division(int n)
{
	if(n%3==0 && n%5==0)
	{
		printf("3 & 5 Both are Divisible ");
	}
	else
	{
		printf("3 & 5 both are not divisible");
	}
}

void main()
{
	int n;
	printf("Enter value of N =");
	scanf("%d",&n);
	division(n);
}