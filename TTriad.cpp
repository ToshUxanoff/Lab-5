#include "stdafx.h"
#include "TTriad.h"
#include "iostream"

TTriad::TTriad()
{
	First = 0;
	Second = 0;
	Third = 0;
}
TTriad::TTriad(int a, int b, int c)
{
	First = a;
	Second = b;
	Third = c;
}
void TTriad::Change(int a, int b, int c)
{
	First = a;
	Second = b;
	Third = c;
}
TTriad::~TTriad()
{
}
bool TTriad::operator ==(const TTriad& obj) const
{
	if (First == obj.First && Second == obj.Second && Third == obj.Third)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool TTriad::operator > (const TTriad& obj) const
{
	if ((First + Second + Third) > (obj.First + obj.Second + obj.Third))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool operator < (const TTriad& a, const TTriad& b) 
{
	if ((a == b) == false && (a > b) == false)
	{
		return true; 
	}
	else
	{
		return false;
	}
}
