#include "stdafx.h"

int main(int argc, char* argv[])
{
	int i;
	const int MAX_RANGE_VALUE = 100;
	const int MIN_RANGE_VALUE = 1;
	const int CHECKING_NUMBER = 2;
	int lastResultValue;

	lastResultValue = const_cast<int&>(MIN_RANGE_VALUE);
	while (lastResultValue % CHECKING_NUMBER != 0)
	{
		lastResultValue++;
	}

	for (i = MAX_RANGE_VALUE; i >= MIN_RANGE_VALUE; --i)
	{
		if (i % CHECKING_NUMBER == 0)
		{
			printf("%d", i);

			if (i != lastResultValue)
			{
				printf(", ");
			}
		}

	}
	printf("\n");
	return 0;
}