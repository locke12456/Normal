#include "Algorithm\Pascal.h"


Pascal::Pascal()
{
}

Pascal::~Pascal()
{
}
int Pascal::Combinations(int row, int index)
{
	return _combinations(row, index);
}
double Pascal::_combinations(double row, double index)
{
	if (index < 1) return 1;
	return ((row / index) * _combinations(row - 1, index - 1));
}