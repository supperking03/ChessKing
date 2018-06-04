#pragma once
#include "co.h"
class tot :
	public co
{
public:
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
	char* getten()
	{
		return ten;
	}
	void setx(int ix)
	{
		x = ix;
	}
	void sety(int iy)
	{
		y = iy;
	}
	void setten(char* cten)
	{
		ten = cten;
	}
	int getloai()
	{
		return loai;
	}
	void setloai(int iloai)
	{
		loai = iloai;
	}
	tot();
	~tot();
};

