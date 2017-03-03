#pragma once
#include "TTriad.h"
class TDate :
	public TTriad
{
public:
	TDate(int a, int b, int c);
	bool operator > (const TDate &obj) const;
	bool operator==(const TDate &obj) const;
	void Change(int day, int month, int year);
	void GetDate();

protected:
};
bool operator < (const TDate & a, const TDate & b);
