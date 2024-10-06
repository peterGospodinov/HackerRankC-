#include "pch.h"
#include "PrimeNumberCheck.h"

bool PrimeNumberCheck::IsPrime(int x)
{
	if (x <= 1) return false;
	bool prime = true;

	for (int i = 2; i <= x / i;i = i + 1)
	{
		int factor = x / i;
		if (factor * i == x)
		{
			prime = false;
			break;
		}
	}
	return prime;
}