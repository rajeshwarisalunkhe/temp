/* 19 The area of a triangle can be computed by the sine law when 2
sides of the triangle and the angle between them are known.
Area = (1 / 2 ) ab sin ( angle )
Given the following 6 triangular pieces of land, write a
program to find their area and determine which is largest,
Plot No. a b angle
1 137.4 80.9 0.78
2 155.2 92.62 0.89
3 149.3 97.93 1.35
4 160.0 100.25 9.00
5 155.6 68.95 1.25
6 149.7 120.0 1.75 

*/

#include <stdio.h>
#include <math.h>
int main(void)
{
	float array[6][3] = {
				{137.4, 80.9, 0.78},
				{155.2, 92.62, 0.89},
				{149.3, 97.93, 1.35},
				{160.0, 100.25, 9.00},
				{155.6, 68.95, 1.25},
				{149.7, 120.0, 1.75}
			  } , ans[6], largest = 0;
	int i, j;


	for(i = 0;i < 6;i++)
	{
		j = 0;
	
		ans[i] = 0.5 * array[i][j] * array[i][j + 1] * sin(array[i][j + 2]);
		
	}

	for(i = 0;i < 6;i++)
	{
		printf("area is %f\n", ans[i]);
		if(ans[i] > largest)
		{
			largest = ans[i];
		} 
	}

	printf("largest area is %f\n", largest);
}

