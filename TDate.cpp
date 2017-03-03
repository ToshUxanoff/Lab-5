#include "stdafx.h"
#include "TDate.h"
#include "iostream" 

TDate::TDate(int day, int month, int year)
{
	while (day > 31 || month > 12)
	{
		if (month == 12 && day > 31)
		{
			year++;
			month++;
			day -= 31;
		}
		if (month > 12)
		{
			month -= 12;
		}
		if ((month == 1 || month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		{
			day -= 30;
			month++;
		}
		if ((month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day > 31)
		{
			day -= 31;
			month++;
		}
		if (month == 2 && day > 28)
		{
			month++;
			day -= 28;
		}
	}
		First = day;
		Second = month;
		Third = year;
	
}
	void TDate::GetDate()	
	{
		std::cout << First << ';' << Second << ';' << Third << std::endl;
	}
	void TDate::Change(int day, int month, int year)
{
	First = day;
	Second = month;
	Third = year;
}
	bool TDate::operator>(const TDate &obj)
{
	if (Third > obj.Third)
	{
		return true;
	}
	
	else if (Third == obj.Third)
	{
		if (Second > obj.Second)
		{
			return true;
		}
		else if (Second == obj.Second)
		{
			if (First > obj.First)
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
		if (Third == obj.Third && Second == obj.Second && First == obj.First)
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
