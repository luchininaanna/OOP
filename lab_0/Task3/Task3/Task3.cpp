#include "stdafx.h"
#include <iostream>
using namespace std;

//невызываемая функция
int PrintDigit(int digit, int minValue, int maxValue, int i)
{
	if ((digit >= minValue) && (digit <= maxValue))
	{
		if (digit != 0)
		{
			printf(", ");
		}
		printf("%d", digit);
		i++;
	}

	return 0;
}

int main()
{
	int minValue = 0;
	int maxValue;

	cout << "Enter the integer parameter (upper limit N)" << "\n";
	cin >> maxValue;

	int farPredecessors = 0;
	int nearPredecessors = 1;
	int newElement = farPredecessors + nearPredecessors;

	int MAX_ELEMENT_IN_LINE = 5;
	int i = 0;

	bool isNewString = true;

	if ((farPredecessors >= minValue) && (farPredecessors <= maxValue))
	{
		printf("%d", farPredecessors);
		i++;
		isNewString = false;
	}

	if ((nearPredecessors >= minValue) && (nearPredecessors <= maxValue))
	{
		printf(", ");
		printf("%d", nearPredecessors);
		i++;
	}

	while (newElement <= maxValue)
	{
		if (newElement >= minValue)
		{
			if (isNewString)
			{
				isNewString = false;
			}
			else
			{
				printf(", ");
			}

			printf("%d", newElement);
			i++;
			if (i == MAX_ELEMENT_IN_LINE)
			{
				printf("\n");
				i = 0;
				isNewString = true;
			}
		}

		farPredecessors = nearPredecessors;
		nearPredecessors = newElement;
		newElement = farPredecessors + nearPredecessors;
	}

	printf("\n");
    return 0;
}
