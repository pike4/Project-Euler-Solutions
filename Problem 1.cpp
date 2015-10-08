#include <iostream>
#include <stdio.h>


int main()
{
	int currentMultiplier = 0;

	int total = 0;

	while (currentMultiplier * 3 < 1000)
	{
		currentMultiplier++;
		if (currentMultiplier * 3 < 1000 && ((currentMultiplier * 3) % 5) != 0)
		{
			total += currentMultiplier * 3;
		}

		if (currentMultiplier * 5 < 1000)
		{
			total += currentMultiplier * 5;
		}

	}

	std::cout << total;
	system("PAUSE");

	return 0;
}