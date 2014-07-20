#pragma once
#include <list>
#define NUMBER 10000
class ILongInteger{

};
class ILongIntegerMode
{
public:
	virtual ILongInteger rule(ILongInteger &a, ILongInteger &b);
};

class LongIntegerAddMode : public ILongIntegerMode
{
public:
	LongIntegerAddMode();
	~LongIntegerAddMode();
	virtual ILongInteger rule(ILongInteger &a, ILongInteger &b);
private:
	ILongInteger _add(ILongInteger &, ILongInteger&);
};


class LongInteger : public ILongInteger
{
public:
	LongInteger();
	~LongInteger();
	LongInteger operator+(LongInteger);
	LongInteger operator+(long int);
	LongInteger operator+(int);
private:
	std::list<int> _numbers;
};

