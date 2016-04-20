// program to add 3 * 3 matrices



#include <stdio.h>

int main(void)
{
	int a[3][3] = {0}, b[3][3] = {0}, c[3][3] = {0}, i, j;

	printf("enter no of first matrix:");

	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("enter no of second matrix:");
	
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}
