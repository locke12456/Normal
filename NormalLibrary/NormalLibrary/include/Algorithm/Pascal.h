#pragma once
class Pascal
{
public:
	Pascal();
	~Pascal();
	static int Combinations(int row, int index);
private:
	static double _combinations(double row, double index);
};

