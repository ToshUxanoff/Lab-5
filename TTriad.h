#pragma once
class TTriad
{
public:
	TTriad();
	TTriad(int a, int b, int c);
	~TTriad();
	void Change(int a, int b, int c);
	bool operator > (const TTriad& obj);
	bool operator == (const TTriad& obj);
protected:
	int First;
	int Second;
	int Third;
};
bool operator < (const TTriad& a, const TTriad &b);
