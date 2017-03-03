#pragma once
#include "TTriad.h"
class TDate :
	public TTriad
{
public:
	TDate(int a, int b, int c);
	bool operator>(const TDate &obj);
	bool operator=(const TDate &obj);
	void Change(int day, int month, int year);
	void GetDate();
protected:
};
bool operator<(const TDate & a, const TDate & b);
