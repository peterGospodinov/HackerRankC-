#include "pch.h"
#include "DiagonalDifference.h"
#include <vector>
using std::vector;

int DiagonalDifference::diagonalDifference(vector<vector<int>> a)
{
	int result = 0;
	int leftDiagonal = 0;
	int rightDiagonal = 0;
	for (int i = 0; i < a.size(); i++)
	{
		leftDiagonal += a[i][i];
		rightDiagonal += a[i][a.size() - i - 1];
	}
	result = abs(leftDiagonal - rightDiagonal);
	return result;
}
