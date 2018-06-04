#pragma once
#include "co.h"
#include "xe.h"
#include "ma.h"
#include "voi.h"
#include "hau.h"
#include "vua.h"
#include "tot.h"


class banco
{
private:
	co** chess;
public:
	void xuatnuoc(int x, int y);
	void Check_Move_Xe_White(co* CHESS);
	int CheckCanKill(co* CHESS, int x, int y, int &pDead);
	void ClearAndPrint();
	void Move_Xe_White(co* CHESS, int &PosDead, int &st);
	void Check_Move_Voi_White(co* CHESS);
	int FindMin(int x, int y);
	void Save_Pos_Can_Move(co* CHESS, int ix, int iy);
	void Draw_Pos(int x, int y);
	void Move_Voi_White(co* CHESS, int &PosDead, int &st);
	void playGame();
	void print();
	void Check_Move_Hau_White(co* CHESS);
	void Move_Hau_White(co* CHESS, int &PosDead, int &st);
	void Check_Move_Ma_White(co* CHESS);
	void Move_Ma_White(co* CHESS, int &PosDead, int &st);
	void Check_Move_Vua_White(co* CHESS);
	void Move_Vua_White(co* CHESS, int &PosDead, int &st);
	void Check_Move_Tot_White(co* CHESS);
	void Move_Tot_White(co* CHESS, int &PosDead, int &st);
	void Play_White(int &p,int &st);
	//....
	int CheckCanKill2(co* CHESS, int x, int y, int &pDead);
	void Check_Move_Xe_Black(co* CHESS);
	void Move_Xe_Black(co* CHESS, int &PosDead, int &st);
	void Check_Move_Voi_Black(co* CHESS);
	void Move_Voi_Black(co* CHESS, int &PosDead, int &st);
	void Check_Move_Hau_Black(co* CHESS);
	void Move_Hau_Black(co* CHESS, int &PosDead, int &st);
	void Check_Move_Ma_Black(co* CHESS);
	void Move_Ma_Black(co* CHESS, int &PosDead, int &st);
	void Check_Move_Vua_Black(co* CHESS);
	void Move_Vua_Black(co* CHESS, int &PosDead, int &st);
	void Check_Move_Tot_Black(co* CHESS);
	void Move_Tot_Black(co* CHESS, int &PosDead, int &st);
	void Play_Black(int &p, int &st);
	int end();
	banco();
	~banco();
};

