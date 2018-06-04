#pragma once
#include <iostream>
#include <string>
#include "graphics.h"

using namespace std;

class co
{
protected:
	char *ten;
	int x;
	int y;
	int loai;
public:
	int move_x[50];
	int move_y[50];
	int iPos;
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
	co();
	~co();
};

