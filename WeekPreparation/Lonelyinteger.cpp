#include "pch.h"
#include "Lonelyinteger.h"
#include <vector>
using std::vector;

int Lonelyinteger::lonelyinteger(vector<int> a)
{
	int result = 0;
	for (int i = 0; i < a.size(); i++)
	{
		result = result ^ a[i];
	}
	return result;

}