/* 20 For the following set of sample data, compute the standard
deviation and the mean.
-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2
The formula for standard deviation is
squareroot((summetion of square( x i − x )  )/ n)

where x i is the data item and x is the mean. */

#include <stdio.h>
#include <math.h>
# define SIZE 15
float std_dev(int *array, float mean);
int main(void)
{

	int array[15] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2}, i;
	float mean, sum = 0, ans;

	for(i = 0;i < SIZE;i++)
	{
		sum = sum + array[i];
	}
	
	mean = sum / SIZE;
	printf("mean is %f\n",mean);

	ans = std_dev(array, mean);

	printf("standard deiation is %f\n", ans);
}

float std_dev(int *array, float mean)
{
	int i;
	float ans, add = 0, deviation;
	for(i = 0;i < SIZE;i++)
	{
		ans = array[i] - mean;
		
		add = add + (ans * ans); 
	}

	add = add / SIZE;

	deviation = sqrt(add);
	return deviation;
}
