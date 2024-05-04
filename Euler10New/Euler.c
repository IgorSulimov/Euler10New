#include <stdlib.h>
#include "Euler.h"
unsigned long long Problem_Euler10(unsigned long long number)
{
	unsigned long long* array = (unsigned long long*)calloc(number, sizeof(number));
	array[0] = 2;
	unsigned long long s = 0;
	for (unsigned long long k = 1; k < number; k++)
	{
		array[k + 2] = k + 2;
	}
	for (unsigned long long d = 0; d < number; d++)
	{
		if (array[d] != 0)
		{
			unsigned long long u = array[d];
			unsigned long long k = d;
			while (u + k < number)
			{
				array[u + k] = 0;
				u += array[d];
			}

		}

	}
	unsigned long long sum = 0;

	for (unsigned long long p = 0; p < number; p++)
	{
		sum = array[p] + sum;
	}
	return sum;
	free(array);
}