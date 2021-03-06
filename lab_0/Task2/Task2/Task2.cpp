#include "stdafx.h"

int SumDigits(int i)
{
	int sum = 0;

	while (i != 0)
	{
		sum += i % 10;
		i /= 10;
	}

	return sum;
}

int main(int argc, char* argv[])
{
	const int MIN_RANGE_VALUE = 1;
	const int MAX_RANGE_VALUE = 1000;

	int i;
	int sumDigits;

	for (i = MIN_RANGE_VALUE; i <= MAX_RANGE_VALUE; ++i)
	{
		sumDigits = SumDigits(i);
		if (i % sumDigits == 0)
		{
			if (i > MIN_RANGE_VALUE)
			{
				printf(", ");
			}
			printf("%d", i);
		}
	}

	printf("\n");
	return 0;
}
