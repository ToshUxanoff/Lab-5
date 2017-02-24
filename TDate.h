#pragma once
#include "TTriad.h"
class TDate :
	public TTriad
{
public:
	TDate(int a, int b, int c);
	bool operator>(const TDate &obj);
	bool operator=(const TDate &obj);
private:
	int Year;
	int Month;
	int Date;
};
bool operator<(const TDate & a, const TDate & b);
