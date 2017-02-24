#include "stdafx.h"
#include "TDate.h"
TDate::TDate(int a, int b, int c)
{
	Date = a;
	Month = b;
	Year = c;
}
	bool TDate::operator>(const TDate &obj)
{
	if (Year > obj.Year)
	{
		return true;
	}
	
	else if (Year == obj.Year)
	{
		if (Month > obj.Month)
		{
			return true;
		}
		else if (Month == obj.Month)
		{
			if (Date > obj.Date)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else 
		{
			return false;
		}
	}
	else 
	{
		return false;
	}
}
	
	bool TDate::operator=(const TDate& obj)
	{
		if (Year == obj.Year && Month == obj.Month && Date == obj.Date)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	
	bool operator<(const TDate & a, const TDate & b)
	{
		TDate date1(a);
		TDate date2(b);
		if (date1 = date2)
		{
			return false;
		}
		else if (date1 > date2)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
