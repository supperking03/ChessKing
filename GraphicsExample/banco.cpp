#include "banco.h"
#include <Windows.h>


void banco::ClearAndPrint()
{
	cleardevice();
	settextjustify(CENTER_TEXT,CENTER_TEXT);
	for (int i = 0; i < 32; i++)
	{
		if (i>15)
		{
			setcolor(GREEN);
			outtextxy(chess[i]->getx(), chess[i]->gety(), chess[i]->getten());
		}
		else
		{
			setcolor(WHITE);
			outtextxy(chess[i]->getx(), chess[i]->gety(), chess[i]->getten());
		}

	}
	setcolor(WHITE);
	for (int i = 0; i < 450; i = i + 50)
	{
		line(i, 0, i, 400);
		line(0, i, 400, i);
	}
	for (int i = 25; i < 425; i += 50)
	{
		char b[10];
		char c[10];
		sprintf(b, "%d", i / 50 + 1);
		outtextxy(410, i, b);
		sprintf(c, "%c", i / 50 + 65);
		outtextxy(i, 415, c);
	}
	setcolor(5);
	
	outtextxy(200, 450, "KING CHESS   by  MiKiNo");
	outtextxy(200, 475, "UIT - Khóa 10 - Khoa Cong Nghe Phan Mem 2015");
	setcolor(3);
	circle(100, 550, 20);
	setcolor(YELLOW);
	circle(100, 600, 20);
	setcolor(WHITE);
	outtextxy(200, 525, "-------->HUONG DAN TRONG GAME<---------");

	outtextxy(200, 550," : Quan co duoc chon.");
	outtextxy(200, 600, " : Quan co co the an.");
	outtextxy(200, 650, "Nhan \"0\" + \"Enter\" de quay lai neu khong co nuoc di");
}
int banco::CheckCanKill(co* CHESS, int x, int y, int &pDead)
{
	int dem = 0;
	for (int i = 0; i < CHESS->iPos; i++)
	{
		if ((x != CHESS->move_x[i]) || (y != CHESS->move_y[i]))
		{
			dem++;
		}
	}
	if (dem == CHESS->iPos)
	{
		return 0;
	}
	for (int i = 0; i < 32; i++)
	{
		if ((x == chess[i]->getx()) && (y == chess[i]->gety())&&(i>15))
		{
			chess[i]->setx(500);
			chess[i]->sety(25+25*pDead);
			pDead++;
			return 1;
		}
		if ((x == chess[i]->getx()) && (y == chess[i]->gety()) && (i<=15))
		{
			return 0;
		}
	}
	

}
banco::banco()
{
	chess = new co*[32];
	chess[0] = new xe;
	chess[1] = new ma;
	chess[2] = new voi;
	chess[3] = new hau;
	chess[4] = new vua;
	chess[5] = new voi;
	chess[6] = new ma;
	chess[7] = new xe;
	chess[8] = new tot;
	chess[9] = new tot;
	chess[10] = new tot;
	chess[11] = new tot;
	chess[12] = new tot;
	chess[13] = new tot;
	chess[14] = new tot;
	chess[15] = new tot;


	chess[5]->setten("VOI2");
	chess[5]->setx(275);
	chess[5]->sety(25);

	chess[6]->setten("MA2");
	chess[6]->setx(325);
	chess[6]->sety(25);

	chess[7]->setten("XE2");
	chess[7]->setx(375);
	chess[7]->sety(25);

	chess[9]->setten("TOT2");
	chess[9]->setx(75);
	chess[9]->sety(75);

	chess[10]->setten("TOT3");
	chess[10]->setx(125);
	chess[10]->sety(75);

	chess[11]->setten("TOT4");
	chess[11]->setx(175);
	chess[11]->sety(75);

	chess[12]->setten("TOT5");
	chess[12]->setx(225);
	chess[12]->sety(75);

	chess[13]->setten("TOT6");
	chess[13]->setx(275);
	chess[13]->sety(75);

	chess[14]->setten("TOT7");
	chess[14]->setx(325);
	chess[14]->sety(75);

	chess[15]->setten("TOT8");
	chess[15]->setx(375);
	chess[15]->sety(75);

	//outtextxy(275, 25, "VOI2");
	//outtextxy(325, 25, "MA2");
	//outtextxy(375, 25, "XE2");
	//outtextxy(25, 75, "TOT1");
	//outtextxy(75, 75, "TOT2");
	//outtextxy(125, 75, "TOT3");
	//outtextxy(175, 75, "TOT4");
	//outtextxy(225, 75, "TOT5");
	//outtextxy(275, 75, "TOT6");
	//outtextxy(325, 75, "TOT7");
	//outtextxy(375, 75, "TOT8");
	chess[16] = new xe;
	chess[17] = new ma;
	chess[18] = new voi;
	chess[19] = new hau;
	chess[20] = new vua;
	chess[21] = new voi;
	chess[22] = new ma;
	chess[23] = new xe;
	chess[24] = new tot;
	chess[25] = new tot;
	chess[26] = new tot;
	chess[27] = new tot;
	chess[28] = new tot;
	chess[29] = new tot;
	chess[30] = new tot;
	chess[31] = new tot;

	chess[16]->setten("XE1");
	chess[16]->setx(25);
	chess[16]->sety(375);
	chess[16]->setloai(1);

	chess[17]->setten("MA1");
	chess[17]->setx(75);
	chess[17]->sety(375);
	chess[17]->setloai(1);

	chess[18]->setten("VOI1");
	chess[18]->setx(125);
	chess[18]->sety(375);
	chess[18]->setloai(1);

	chess[19]->setten("HAU");
	chess[19]->setx(175);
	chess[19]->sety(375);
	chess[19]->setloai(1);

	chess[20]->setten("VUA");
	chess[20]->setx(225);
	chess[20]->sety(375);
	chess[20]->setloai(1);

	chess[21]->setten("VOI2");
	chess[21]->setx(275);
	chess[21]->sety(375);
	chess[21]->setloai(1);

	chess[22]->setten("MA2");
	chess[22]->setx(325);
	chess[22]->sety(375);
	chess[22]->setloai(1);

	chess[23]->setten("XE2");
	chess[23]->setx(375);
	chess[23]->sety(375);
	chess[23]->setloai(1);

	chess[24]->setten("TOT1");
	chess[24]->setx(25);
	chess[24]->sety(325);
	chess[24]->setloai(1);

	chess[25]->setten("TOT2");
	chess[25]->setx(75);
	chess[25]->sety(325);
	chess[25]->setloai(1);

	chess[26]->setten("TOT3");
	chess[26]->setx(125);
	chess[26]->sety(325);
	chess[26]->setloai(1);

	chess[27]->setten("TOT4");
	chess[27]->setx(175);
	chess[27]->sety(325);
	chess[27]->setloai(1);

	chess[28]->setten("TOT5");
	chess[28]->setx(225);
	chess[28]->sety(325);
	chess[28]->setloai(1);

	chess[29]->setten("TOT6");
	chess[29]->setx(275);
	chess[29]->sety(325);
	chess[29]->setloai(1);

	chess[30]->setten("TOT7");
	chess[30]->setx(325);
	chess[30]->sety(325);
	chess[30]->setloai(1);

	chess[31]->setten("TOT8");
	chess[31]->setx(375);
	chess[31]->sety(325);
	chess[31]->setloai(1);
}


banco::~banco()
{
}

void banco::Save_Pos_Can_Move(co* CHESS, int ix, int iy)
{
	CHESS->move_x[CHESS->iPos] = ix;
	CHESS->move_y[CHESS->iPos] = iy;
}

void banco::xuatnuoc(int x, int y)
{
	char c[10];
	sprintf(c, "%c", x / 50 + 65);
	cout << "\n" << c << y / 50 + 1;
}

void banco::Draw_Pos(int x, int y)
{
	setcolor(YELLOW);
	char c[10];
	char b[10];
	sprintf(c, "%c", x / 50 + 65);
	sprintf(b, "%c", y / 50 + 49);
	outtextxy(x, y, c);
	outtextxy(x + 8, y, b);

	setcolor(WHITE);
}

void banco::print()
{
	settextjustify(1, 1);
	for (int i = 0; i < 32; i++)
	{
		if (i>15)
		{
			setcolor(GREEN);
			outtextxy(chess[i]->getx(), chess[i]->gety(), chess[i]->getten());
		}
		else
		{
			setcolor(WHITE);
			outtextxy(chess[i]->getx(), chess[i]->gety(), chess[i]->getten());
		}
		
	}
	setcolor(WHITE);
}

void banco::Move_Xe_White(co* CHESS, int &PosDead, int &st)
{

		setcolor(3);
		circle(CHESS->getx(), CHESS->gety(), 20);
		setcolor(WHITE);
		CHESS->iPos = 0;
		CHESS->move_x[50] = { 0 };
		CHESS->move_y[50] = { 0 };
		Check_Move_Xe_White(CHESS);
		//for (int i = 0; i < CHESS->iPos; i++)
		//{
		//	cout << "\n" << CHESS->move_x[i] << "\t" << CHESS->move_y[i];
		//}
		char nuoc[3];
		cout << "\nNhap nuoc can di: ";
		cin >> nuoc;
		int nuoc0 = nuoc[0];
		int nuoc1 = nuoc[1];
		if (CheckCanKill(CHESS, 25 + (nuoc[0] - 97) * 50, 25 + (nuoc[1] - 49) * 50, PosDead) == 0)
		{

			cout << "\n\t\t\t CAN'T MOVE ";
			Sleep(2000);
			st--;
		}
		else
		{
			CHESS->setx(25 + (nuoc[0] - 97) * 50);
			CHESS->sety(25 + (nuoc[1] - 49) * 50);
		}
		ClearAndPrint();
		system("cls");
	
}

void banco::Check_Move_Xe_White(co* CHESS)
{
	cout << "\nNuoc co the di duoc: ";
	for (int a = 50; a < CHESS->gety(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()) && (i>15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() - a, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() - a);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx(), CHESS->gety() - a);
			xuatnuoc(CHESS->getx(), CHESS->gety() - a);
			Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->gety() - a - 50 == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() - a - 50, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() - a - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - a - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		else
		{
			break;
		}
	}
	//....
	for (int a = 50; a < 415 - CHESS->gety(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx())&&(i>15)&&(a==50))
			{

				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() + a, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() + a);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx(), CHESS->gety() + a);
			xuatnuoc(CHESS->getx(), CHESS->gety() + a);
			Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->gety() + a + 50 == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() + a + 50, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() + a + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + a + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//........
	for (int a = 50; a < CHESS->getx(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety())&&(i>15)&&(a==50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() - a, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() - a, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() - a, CHESS->gety());
			xuatnuoc(CHESS->getx() - a, CHESS->gety());
			Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety());
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->getx() - a - 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - a - 50, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() - a - 50, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a - 50, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//.....
	for (int a = 50; a < 400 - CHESS->getx(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety())&&(i>15)&&(a==50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() + a, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() + a, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() + a, CHESS->gety());
			xuatnuoc(CHESS->getx() + a, CHESS->gety());
			Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety());
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->getx() + a + 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + a + 50, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() + a + 50, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a + 50, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}

}

int banco::end()
{
	if (chess[4]->getx() > 375)
		return 1;
	if (chess[20]->getx() > 375)
		return 1;
	
}

void banco::playGame()
{
	int p1 = 0;
	int p2 = 0;
	int step = 1;
	while (1)
	{
		if (step % 2 == 1)
		{
			cout << "\tTEAM WHITE\n";
			Play_White(p1,step);
		}
		else
		{
			system("color 2");
			cout << "\tTEAM GREEN\n";
			Play_Black(p2,step);
			system("color 7");
		}
		step++;
		if (end() == 1)
			break;
	}
	cleardevice();
	setcolor(RED);
	line(0, 400, 400, 400);
	line(400, 0, 400, 400);
	outtextxy(200, 200, "GAME OVER");
}

int banco::FindMin(int x, int y)
{
	if ((x - y) >= 0)
		return y;
	else return x;
}

void banco::Check_Move_Voi_White(co* CHESS)
{
	cout << "\nNuoc co the di duoc: ";
	for (int a = 50; a < FindMin(CHESS->getx(),CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() - a == chess[i]->getx()) && (i>15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() - a, CHESS->gety() - a, 20);
				xuatnuoc(CHESS->getx() - a, CHESS->gety() - a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() - a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() - a == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() - a, CHESS->gety() - a);
			xuatnuoc(CHESS->getx() - a, CHESS->gety() - a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() - a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->gety() - a - 50 == chess[i]->gety()) && (CHESS->getx() - a - 50 == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - a -50, CHESS->gety() - a - 50, 20);
				xuatnuoc(CHESS->getx() - a - 50, CHESS->gety() - a - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a - 50, CHESS->gety() - a - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		else
		{
			break;
		}
	}
	//.....
	for (int a = 50; a < FindMin(415 - CHESS->getx(), 415 - CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() + a == chess[i]->getx()) && (i>15) && (a == 50))
			{

				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() + a, CHESS->gety() + a, 20);
				xuatnuoc(CHESS->getx() + a, CHESS->gety() + a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() + a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() + a == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() + a, CHESS->gety() + a);
			xuatnuoc(CHESS->getx() + a, CHESS->gety() + a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() + a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->gety() + a + 50 == chess[i]->gety()) && (CHESS->getx() + a + 50 == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + a + 50, CHESS->gety() + a + 50, 20);
				xuatnuoc(CHESS->getx() + a + 50, CHESS->gety() + a + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a + 50, CHESS->gety() + a + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//......
	for (int a = 50; a < FindMin(CHESS->getx(),415 - CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() + a == chess[i]->gety()) && (i>15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() - a, CHESS->gety() + a, 20);
				xuatnuoc(CHESS->getx() - a, CHESS->gety() + a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() + a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() + a == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() - a, CHESS->gety() + a);
			xuatnuoc(CHESS->getx() - a, CHESS->gety() + a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() + a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->getx() - a - 50 == chess[i]->getx()) && (CHESS->gety() + a + 50 == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - a - 50, CHESS->gety() + a + 50, 20);
				xuatnuoc(CHESS->getx() - a - 50, CHESS->gety() + a + 50 );
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a - 50, CHESS->gety() + a + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//....
	for (int a = 50; a < FindMin(415 - CHESS->getx(), CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() - a == chess[i]->gety()) && (i>15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() + a, CHESS->gety() - a, 20);
				xuatnuoc(CHESS->getx() + a, CHESS->gety() - a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() - a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() - a == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() + a, CHESS->gety() - a);
			xuatnuoc(CHESS->getx() + a, CHESS->gety() - a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() - a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->getx() + a + 50 == chess[i]->getx()) && (CHESS->gety() - a - 50 == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + a + 50, CHESS->gety() - a -50, 20);
				xuatnuoc(CHESS->getx() + a + 50, CHESS->gety() - a - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a + 50, CHESS->gety() - a - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		else
		{
			break;
		}
	}
}

void banco::Move_Voi_White(co* CHESS, int &PosDead, int &st)
{
				


				setcolor(3);
				circle(CHESS->getx(), CHESS->gety(), 20);
				setcolor(WHITE);
				CHESS->iPos = 0;
				CHESS->move_x[50] = { 0 };
				CHESS->move_y[50] = { 0 };
				Check_Move_Voi_White(CHESS);
				char nuoc[3];
				cout << "\nNhap nuoc can di: ";
				cin >> nuoc; cin.ignore();
				int nuoc0 = nuoc[0];
				int nuoc1 = nuoc[1];
				if (CheckCanKill(CHESS, 25 + (nuoc[0] - 97) * 50, 25 + (nuoc[1] - 49) * 50, PosDead) == 0)
				{

					cout << "\n\t\t\t CAN'T MOVE ";
					Sleep(2000);
					st--;
				}
				else
				{
					CHESS->setx(25 + (nuoc[0] - 97) * 50);
					CHESS->sety(25 + (nuoc[1] - 49) * 50);
				}
				ClearAndPrint();
				system("cls");
			
}

void banco::Check_Move_Hau_White(co* CHESS)
{
	cout << "\nNuoc co the di duoc: ";
	for (int a = 50; a < CHESS->gety(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()) && (i>15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() - a, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() - a);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx(), CHESS->gety() - a);
			xuatnuoc(CHESS->getx(), CHESS->gety() - a);
			Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->gety() - a - 50 == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() - a - 50, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() - a - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - a - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		else
		{
			break;
		}
	}
	//....
	for (int a = 50; a < 415 - CHESS->gety(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()) && (i>15) && (a == 50))
			{

				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() + a, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() + a);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx(), CHESS->gety() + a);
			xuatnuoc(CHESS->getx(), CHESS->gety() + a);
			Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->gety() + a + 50 == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() + a + 50, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() + a + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + a + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//........
	for (int a = 50; a < CHESS->getx(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()) && (i>15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() - a, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() - a, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() - a, CHESS->gety());
			xuatnuoc(CHESS->getx() - a, CHESS->gety());
			Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety());
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->getx() - a - 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - a - 50, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() - a - 50, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a - 50, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//.....
	for (int a = 50; a < 400 - CHESS->getx(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()) && (i>15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() + a, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() + a, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() + a, CHESS->gety());
			xuatnuoc(CHESS->getx() + a, CHESS->gety());
			Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety());
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->getx() + a + 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + a + 50, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() + a + 50, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a + 50, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}

	for (int a = 50; a < FindMin(CHESS->getx(), CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() - a == chess[i]->getx()) && (i>15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() - a, CHESS->gety() - a, 20);
				xuatnuoc(CHESS->getx() - a, CHESS->gety() - a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() - a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() - a == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() - a, CHESS->gety() - a);
			xuatnuoc(CHESS->getx() - a, CHESS->gety() - a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() - a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->gety() - a - 50 == chess[i]->gety()) && (CHESS->getx() - a - 50 == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - a - 50, CHESS->gety() - a - 50, 20);
				xuatnuoc(CHESS->getx() - a - 50, CHESS->gety() - a - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a - 50, CHESS->gety() - a - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		else
		{
			break;
		}
	}
	//.....
	for (int a = 50; a < FindMin(415 - CHESS->getx(), 415 - CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() + a == chess[i]->getx()) && (i>15) && (a == 50))
			{

				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() + a, CHESS->gety() + a, 20);
				xuatnuoc(CHESS->getx() + a, CHESS->gety() + a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() + a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() + a == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() + a, CHESS->gety() + a);
			xuatnuoc(CHESS->getx() + a, CHESS->gety() + a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() + a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->gety() + a + 50 == chess[i]->gety()) && (CHESS->getx() + a + 50 == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + a + 50, CHESS->gety() + a + 50, 20);
				xuatnuoc(CHESS->getx() + a + 50, CHESS->gety() + a + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a + 50, CHESS->gety() + a + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//......
	for (int a = 50; a < FindMin(CHESS->getx(), 415 - CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() + a == chess[i]->gety()) && (i>15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() - a, CHESS->gety() + a, 20);
				xuatnuoc(CHESS->getx() - a, CHESS->gety() + a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() + a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() + a == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() - a, CHESS->gety() + a);
			xuatnuoc(CHESS->getx() - a, CHESS->gety() + a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() + a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->getx() - a - 50 == chess[i]->getx()) && (CHESS->gety() + a + 50 == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - a - 50, CHESS->gety() + a + 50, 20);
				xuatnuoc(CHESS->getx() - a - 50, CHESS->gety() + a + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a - 50, CHESS->gety() + a + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//....
	for (int a = 50; a < FindMin(415 - CHESS->getx(), CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() - a == chess[i]->gety()) && (i>15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() + a, CHESS->gety() - a, 20);
				xuatnuoc(CHESS->getx() + a, CHESS->gety() - a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() - a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() - a == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() + a, CHESS->gety() - a);
			xuatnuoc(CHESS->getx() + a, CHESS->gety() - a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() - a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 16; i < 32; i++)
			{
				if ((CHESS->getx() + a + 50 == chess[i]->getx()) && (CHESS->gety() - a - 50 == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + a + 50, CHESS->gety() - a - 50, 20);
				xuatnuoc(CHESS->getx() + a + 50, CHESS->gety() - a - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a + 50, CHESS->gety() - a - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		else
		{
			break;
		}
	}

}

void banco::Move_Hau_White(co* CHESS, int &PosDead, int &st)
{
	

		setcolor(3);
		circle(CHESS->getx(), CHESS->gety(),20);
		setcolor(WHITE);
		CHESS->iPos = 0;
		CHESS->move_x[50] = { 0 };
		CHESS->move_y[50] = { 0 };
		Check_Move_Hau_White(CHESS);
		char nuoc[3];
		cout << "\nNhap nuoc can di: ";
		cin >> nuoc;
		int nuoc0 = nuoc[0];
		int nuoc1 = nuoc[1];
		if (CheckCanKill(CHESS, 25 + (nuoc[0] - 97) * 50, 25 + (nuoc[1] - 49) * 50, PosDead) == 0)
		{

			cout << "\n\t\t\t CAN'T MOVE ";
			Sleep(2000);
			st--;
		}
		else
		{
			CHESS->setx(25 + (nuoc[0] - 97) * 50);
			CHESS->sety(25 + (nuoc[1] - 49) * 50);
		}
		ClearAndPrint();
		system("cls");
	
}

void banco::Check_Move_Ma_White(co* CHESS)
{
	int dem = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() - 100 == chess[i]->gety()))
		{
			dem++;
		}
	}
	if ((dem == 0) && (CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety() - 100 >= 25) && (CHESS->gety() - 100 <= 375))
	{
		Draw_Pos(CHESS->getx() + 50, CHESS->gety() - 100);
		xuatnuoc(CHESS->getx() + 50, CHESS->gety() - 100);
		Save_Pos_Can_Move(CHESS,CHESS->getx() + 50, CHESS->gety() - 100);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() - 100 == chess[i]->gety()) && (CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety() - 100 >= 25) && (CHESS->gety() - 100 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 50, CHESS->gety() - 100, 20);
				xuatnuoc(CHESS->getx() + 50, CHESS->gety() - 100);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() - 100);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
	//.............

	int dem_1 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() - 100 == chess[i]->gety()))
		{
			dem_1++;
		}
	}
	if ((dem_1 == 0) && (CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() - 100 >= 25) && (CHESS->gety() - 100 <= 375))
	{
		Draw_Pos(CHESS->getx() - 50, CHESS->gety() - 100);
		xuatnuoc(CHESS->getx() - 50, CHESS->gety() - 100);
		Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() - 100);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() - 100 == chess[i]->gety()) && (CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() - 100 >= 25) && (CHESS->gety() - 100 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 50, CHESS->gety() - 100, 20);
				xuatnuoc(CHESS->getx() - 50, CHESS->gety() - 100);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() - 100);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//..........

	int dem_2 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() + 100 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()))
		{
			dem_2++;
		}
	}
	if ((dem_2 == 0) && (CHESS->getx() + 100 >= 25) && (CHESS->getx() + 100 <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <=375))
	{
		Draw_Pos(CHESS->getx() + 100, CHESS->gety() - 50);
		xuatnuoc(CHESS->getx() + 100, CHESS->gety() - 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() + 100, CHESS->gety() - 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() + 100 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()) && (CHESS->getx() + 100 >= 25) && (CHESS->getx() + 100 <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 100, CHESS->gety() - 50, 20);
				xuatnuoc(CHESS->getx() + 100, CHESS->gety() - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 100, CHESS->gety() - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//..................

	int dem_3 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() + 100 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()))
		{
			dem_3++;
		}
	}
	if ((dem_3 == 0) && (CHESS->getx() + 100 >= 25) && (CHESS->getx() + 100 <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50<= 375))
	{
		Draw_Pos(CHESS->getx() + 100, CHESS->gety() + 50);
		xuatnuoc(CHESS->getx() + 100, CHESS->gety() + 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() + 100, CHESS->gety() + 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() + 100 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()) && (CHESS->getx() + 100 >= 25) && (CHESS->getx() + 100 <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 100, CHESS->gety() + 50, 20);
				xuatnuoc(CHESS->getx() + 100, CHESS->gety() + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 100, CHESS->gety() + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//.............

	int dem_4 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() + 100 == chess[i]->gety()))
		{
			dem_4++;
		}
	}
	if ((dem_4 == 0) && (CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety() + 100 >= 25) && (CHESS->gety() + 100 <= 375))
	{
		Draw_Pos(CHESS->getx() + 50, CHESS->gety() + 100);
		xuatnuoc(CHESS->getx() + 50, CHESS->gety() + 100);
		Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() + 100);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() + 100 == chess[i]->gety()) && (CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety() + 100 >= 25) && (CHESS->gety() + 100 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 50, CHESS->gety() + 100, 20);
				xuatnuoc(CHESS->getx() + 50, CHESS->gety() + 100);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() + 100);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//...............

	int dem_5 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() + 100 == chess[i]->gety()))
		{
			dem_5++;
		}
	}
	if ((dem_5 == 0) && (CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() + 100 >= 25) && (CHESS->gety() + 100<=375))
	{
		Draw_Pos(CHESS->getx() - 50, CHESS->gety() + 100);
		xuatnuoc(CHESS->getx() - 50, CHESS->gety() + 100);
		Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() + 100);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() + 100 == chess[i]->gety()) && (CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() + 100 >= 25) && (CHESS->gety() + 100 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 50, CHESS->gety() + 100, 20);
				xuatnuoc(CHESS->getx() - 50, CHESS->gety() + 100);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() + 100);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//...........

	int dem_6 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() - 100 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()))
		{
			dem_6++;
		}
	}
	if ((dem_6 == 0) && (CHESS->getx() - 100 >= 25) && (CHESS->getx() - 100 <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50<=375))
	{
		Draw_Pos(CHESS->getx() - 100, CHESS->gety() - 50);
		xuatnuoc(CHESS->getx() - 100, CHESS->gety() - 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() + 100, CHESS->gety() - 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() - 100 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()) && (CHESS->getx() - 100 >= 25) && (CHESS->getx() - 100 <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 100, CHESS->gety() - 50, 20);
				xuatnuoc(CHESS->getx() - 100, CHESS->gety() - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 100, CHESS->gety() - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//..................

	int dem_7 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() - 100 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()))
		{
			dem_7++;
		}
	}
	if ((dem_7 == 0) && (CHESS->getx() - 100 >= 25) && (CHESS->getx() - 100 <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50<=375))
	{
		Draw_Pos(CHESS->getx() - 100, CHESS->gety() + 50);
		xuatnuoc(CHESS->getx() - 100, CHESS->gety() + 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() - 100, CHESS->gety() + 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() - 100 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()) && (CHESS->getx() - 100 >= 25) && (CHESS->getx() - 100 <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 100, CHESS->gety() + 50, 20);
				xuatnuoc(CHESS->getx() - 100, CHESS->gety() + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 100, CHESS->gety() + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

}

void banco::Move_Ma_White(co* CHESS, int &PosDead, int &st)
{

		setcolor(3);
		circle(CHESS->getx(), CHESS->gety(), 20);
		setcolor(WHITE);
		CHESS->iPos = 0;
		CHESS->move_x[50] = { 0 };
		CHESS->move_y[50] = { 0 };
		Check_Move_Ma_White(CHESS);
		char nuoc[3];
		cout << "\nNhap nuoc can di: ";
		cin >> nuoc;
		int nuoc0 = nuoc[0];
		int nuoc1 = nuoc[1];
		if (CheckCanKill(CHESS, 25 + (nuoc[0] - 97) * 50, 25 + (nuoc[1] - 49) * 50, PosDead) == 0)
		{

			cout << "\n\t\t\t CAN'T MOVE ";
			Sleep(2000);
			st--;
		}
		else
		{
			CHESS->setx(25 + (nuoc[0] - 97) * 50);
			CHESS->sety(25 + (nuoc[1] - 49) * 50);
		}
		ClearAndPrint();
		system("cls");
	
}

void banco::Check_Move_Vua_White(co* CHESS)
{
	int dem = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()))
		{
			dem++;
		}
	}
	if ((dem == 0) && (CHESS->getx() >= 25) && (CHESS->getx() <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50<=375))
	{
		Draw_Pos(CHESS->getx(), CHESS->gety() + 50);
		xuatnuoc(CHESS->getx(), CHESS->gety() + 50);
		Save_Pos_Can_Move(CHESS,CHESS->getx(), CHESS->gety() + 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()) && ((CHESS->getx() >= 25) && (CHESS->getx() <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50 <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() + 50,20);
				xuatnuoc(CHESS->getx(), CHESS->gety() + 50);
				Save_Pos_Can_Move(CHESS,CHESS->getx(), CHESS->gety() + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
	//..........

	int dem2 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()))
		{
			dem2++;
		}
	}
	if ((dem2 == 0) && (CHESS->getx() >= 25) && (CHESS->getx() <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375))
	{
		Draw_Pos(CHESS->getx(), CHESS->gety() - 50);
		xuatnuoc(CHESS->getx(), CHESS->gety() - 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()) && ((CHESS->getx() >= 25) && (CHESS->getx() <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() - 50, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//......

	int dem3 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
		{
			dem3++;
		}
	}
	if ((dem3 == 0) && (CHESS->getx()+50 >= 25) && (CHESS->getx() +50<= 375) && (CHESS->gety() >= 25) && (CHESS->gety() <= 375))
	{
		Draw_Pos(CHESS->getx()+50, CHESS->gety());
		xuatnuoc(CHESS->getx()+50, CHESS->gety());
		Save_Pos_Can_Move(CHESS, CHESS->getx()+50, CHESS->gety());
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx()+50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()) && ((CHESS->getx()+50 >= 25) && (CHESS->getx()+50 <= 375) && (CHESS->gety() >= 25) && (CHESS->gety() <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx()+50, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx()+50, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx()+50, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
	//.......

	int dem4 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
		{
			dem4++;
		}
	}
	if ((dem4 == 0) && (CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() >= 25) && (CHESS->gety() <= 375))
	{
		Draw_Pos(CHESS->getx() - 50, CHESS->gety());
		xuatnuoc(CHESS->getx() - 50, CHESS->gety());
		Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety());
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()) && ((CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() >= 25) && (CHESS->gety() <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 50, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() - 50, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//....

	int dem5 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()))
		{
			dem5++;
		}
	}
	if ((dem5 == 0) && (CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety()-50 >= 25) && (CHESS->gety()-50 <= 375))
	{
		Draw_Pos(CHESS->getx() - 50, CHESS->gety()-50);
		xuatnuoc(CHESS->getx() - 50, CHESS->gety()-50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety()-50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety()-50 == chess[i]->gety()) && ((CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety()-50 >= 25) && (CHESS->gety()-50 <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 50, CHESS->gety()-50, 20);
				xuatnuoc(CHESS->getx() - 50, CHESS->gety()-50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety()-50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
	//....

	int dem6 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety()+50 == chess[i]->gety()))
		{
			dem6++;
		}
	}
	if ((dem6 == 0) && (CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety()+50 >= 25) && (CHESS->gety()+50 <= 375))
	{
		Draw_Pos(CHESS->getx() - 50, CHESS->gety()+50);
		xuatnuoc(CHESS->getx() - 50, CHESS->gety()+50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety()+50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() +50 == chess[i]->gety()) && ((CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety()+50 >= 25) && (CHESS->gety()+50 <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 50, CHESS->gety()+50, 20);
				xuatnuoc(CHESS->getx() - 50, CHESS->gety()+50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety()+50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
	//....

	int dem7 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety()+50 == chess[i]->gety()))
		{
			dem7++;
		}
	}
	if ((dem7 == 0) && (CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety()+50 >= 25) && (CHESS->gety()+50 <= 375))
	{
		Draw_Pos(CHESS->getx() + 50, CHESS->gety()+50);
		xuatnuoc(CHESS->getx() + 50, CHESS->gety()+50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety()+50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety()+50 == chess[i]->gety()) && ((CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety()+50 >= 25) && (CHESS->gety()+50 <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 50, CHESS->gety()+50, 20);
				xuatnuoc(CHESS->getx() + 50, CHESS->gety()+50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety()+50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
	//....

	int dem8 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety()-50 == chess[i]->gety()))
		{
			dem8++;
		}
	}
	if ((dem8 == 0) && (CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety()-50 >= 25) && (CHESS->gety()-50 <= 375))
	{
		Draw_Pos(CHESS->getx() + 50, CHESS->gety()-50);
		xuatnuoc(CHESS->getx() + 50, CHESS->gety()-50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety()-50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety()-50 == chess[i]->gety()) && ((CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety()-50 >= 25) && (CHESS->gety()-50 <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 50, CHESS->gety()-50, 20);
				xuatnuoc(CHESS->getx() + 50, CHESS->gety()-50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety()-50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
}

void banco::Move_Vua_White(co* CHESS, int &PosDead, int &st)
{

		setcolor(3);
		circle(CHESS->getx(), CHESS->gety(), 20);
		setcolor(WHITE);
		CHESS->iPos = 0;
		CHESS->move_x[50] = { 0 };
		CHESS->move_y[50] = { 0 };
		Check_Move_Vua_White(CHESS);
		char nuoc[3];
		cout << "\nNhap nuoc can di: ";
		cin >> nuoc;
		int nuoc0 = nuoc[0];
		int nuoc1 = nuoc[1];
		if (CheckCanKill(CHESS, 25 + (nuoc[0] - 97) * 50, 25 + (nuoc[1] - 49) * 50, PosDead) == 0)
		{

			cout << "\n\t\t\t CAN'T MOVE ";
			Sleep(2000);
			st--;
		}
		else
		{
			CHESS->setx(25 + (nuoc[0] - 97) * 50);
			CHESS->sety(25 + (nuoc[1] - 49) * 50);
		}
		ClearAndPrint();
		system("cls");
	
}

void banco::Check_Move_Tot_White(co* CHESS)
{
	if (CHESS->gety() == 75)
	{
		for (int a = 50; a <= 100; a += 50)
		{
			int dem = 0;
			for (int i = 0; i < 32; i++)
			{
				if ((CHESS->getx() == chess[i]->getx()) && (CHESS->gety() + a == chess[i]->gety()))
				{
					dem++;
				}
			}
			if (dem == 0)
			{
				Draw_Pos(CHESS->getx(), CHESS->gety() + a);
				xuatnuoc(CHESS->getx(), CHESS->gety() + a);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + a);
				CHESS->iPos++;
			}
			else
			{
				break;
			}
		}
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()))
			{ 
				setcolor(YELLOW);
				circle(CHESS->getx() - 50, CHESS->gety() + 50, 20);
				xuatnuoc(CHESS->getx() - 50, CHESS->gety() + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		//.....
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 50, CHESS->gety() + 50, 20);
				xuatnuoc(CHESS->getx() + 50, CHESS->gety() + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
	else
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()))
			{
				dem++;
			}
		}
		if ((dem == 0) && (CHESS->getx() >= 25) && (CHESS->getx() <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50<=375))
		{
			Draw_Pos(CHESS->getx(), CHESS->gety() + 50);
			xuatnuoc(CHESS->getx(), CHESS->gety() + 50);
			Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + 50);
			CHESS->iPos++;
		}

		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 50, CHESS->gety() + 50, 20);
				xuatnuoc(CHESS->getx() - 50, CHESS->gety() + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		//.....
		for (int i = 16; i < 32; i++)
		{
			if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 50, CHESS->gety() + 50, 20);
				xuatnuoc(CHESS->getx() + 50, CHESS->gety() + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

}

void banco::Move_Tot_White(co* CHESS, int &PosDead, int &st)
{


		setcolor(3);
		circle(CHESS->getx(), CHESS->gety(), 20);
		setcolor(WHITE);
		CHESS->iPos = 0;
		CHESS->move_x[50] = { 0 };
		CHESS->move_y[50] = { 0 };
		Check_Move_Tot_White(CHESS);
		char nuoc[3];
		cout << "\nNhap nuoc can di: ";
		cin >> nuoc;
		int nuoc0 = nuoc[0];
		int nuoc1 = nuoc[1];
		if (CheckCanKill(CHESS, 25 + (nuoc[0] - 97) * 50, 25 + (nuoc[1] - 49) * 50, PosDead) == 0)
		{

			cout << "\n\t\t\t CAN'T MOVE ";
			Sleep(2000);
			st--;
		}
		else
		{
			CHESS->setx(25 + (nuoc[0] - 97) * 50);
			CHESS->sety(25 + (nuoc[1] - 49) * 50);
		}
		if (CHESS->gety() == 375)
		{
			CHESS->setten("hau");
		}
		ClearAndPrint();
		system("cls");
	
}

void banco::Play_White(int &p, int &st)
{
	

		int choice;
		cout << "\nNhap quan co can di: \n1.XE\n2.MA\n3.VOI\n4.HAU\n5.VUA\n6.VOI2\n7.MA2\n8.XE2\n9.TOT1\n10.TOT2\n11.TOT3\n12.TOT4\n13.TOT5\n14.TOT6\n15.TOT7\n16.TOT8\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			Move_Xe_White(chess[0], p, st); break;
		case 2:
			Move_Ma_White(chess[1], p, st); break;
		case 3:
			Move_Voi_White(chess[2], p, st); break;
		case 4:
			Move_Hau_White(chess[3], p, st); break;
		case 5:
			Move_Vua_White(chess[4], p, st); break;
		case 6:
			Move_Voi_White(chess[5], p, st); break;
		case 7:
			Move_Ma_White(chess[6], p, st); break;
		case 8:
			Move_Xe_White(chess[7], p,st); break;
		case 9:
			Move_Tot_White(chess[8], p, st); break;
		case 10:
			Move_Tot_White(chess[9], p, st); break;
		case 11:
			Move_Tot_White(chess[10], p, st); break;
		case 12:
			Move_Tot_White(chess[11], p, st); break;
		case 13:
			Move_Tot_White(chess[12], p, st); break;
		case 14:
			Move_Tot_White(chess[13], p, st); break;
		case 15:
			Move_Tot_White(chess[14], p, st); break;
		case 16:
			Move_Tot_White(chess[15], p, st); break;
		}
	
}

//.......

int banco::CheckCanKill2(co* CHESS, int x, int y, int &pDead)
{
	int dem = 0;
	for (int i = 0; i < CHESS->iPos; i++)
	{
		if ((x != CHESS->move_x[i]) || (y != CHESS->move_y[i]))
		{
			dem++;
		}
	}
	if (dem == CHESS->iPos)
	{
		return 0;
	}
	for (int i = 0; i < 32; i++)
	{
		if ((x == chess[i]->getx()) && (y == chess[i]->gety()) && (i<=15))
		{
			chess[i]->setx(550);
			chess[i]->sety(25 + 25 * pDead);
			pDead++;
			return 1;
		}
		if ((x == chess[i]->getx()) && (y == chess[i]->gety()) && (i > 15))
		{
			return 0;
		}
	}


}

void banco::Move_Xe_Black(co* CHESS, int &PosDead, int &st)
{

	setcolor(3);
	circle(CHESS->getx(), CHESS->gety(), 20);
	setcolor(WHITE);
	CHESS->iPos = 0;
	CHESS->move_x[50] = { 0 };
	CHESS->move_y[50] = { 0 };
	Check_Move_Xe_Black(CHESS);
	//for (int i = 0; i < CHESS->iPos; i++)
	//{
	//	cout << "\n" << CHESS->move_x[i] << "\t" << CHESS->move_y[i];
	//}
	char nuoc[3];
	cout << "\nNhap nuoc can di: ";
	cin >> nuoc;
	int nuoc0 = nuoc[0];
	int nuoc1 = nuoc[1];
	if (CheckCanKill2(CHESS, 25 + (nuoc[0] - 97) * 50, 25 + (nuoc[1] - 49) * 50, PosDead) == 0)
	{

		cout << "\n\t\t\t CAN'T MOVE ";
		Sleep(2000);
		st--;
	}
	else
	{
		CHESS->setx(25 + (nuoc[0] - 97) * 50);
		CHESS->sety(25 + (nuoc[1] - 49) * 50);
	}
	ClearAndPrint();
	system("cls");

}

void banco::Check_Move_Xe_Black(co* CHESS)
{
	cout << "\nNuoc co the di duoc: ";
	for (int a = 50; a < CHESS->gety(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()) && (i<=15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() - a, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() - a);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx(), CHESS->gety() - a);
			xuatnuoc(CHESS->getx(), CHESS->gety() - a);
			Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->gety() - a - 50 == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() - a - 50, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() - a - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - a - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		else
		{
			break;
		}
	}
	//....
	for (int a = 50; a < 415 - CHESS->gety(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()) && (i<=15) && (a == 50))
			{

				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() + a, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() + a);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx(), CHESS->gety() + a);
			xuatnuoc(CHESS->getx(), CHESS->gety() + a);
			Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->gety() + a + 50 == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() + a + 50, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() + a + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + a + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//........
	for (int a = 50; a < CHESS->getx(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()) && (i<=15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() - a, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() - a, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() - a, CHESS->gety());
			xuatnuoc(CHESS->getx() - a, CHESS->gety());
			Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety());
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->getx() - a - 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - a - 50, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() - a - 50, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a - 50, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//.....
	for (int a = 50; a < 400 - CHESS->getx(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()) && (i<=15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() + a, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() + a, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() + a, CHESS->gety());
			xuatnuoc(CHESS->getx() + a, CHESS->gety());
			Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety());
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->getx() + a + 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + a + 50, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() + a + 50, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a + 50, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}

}

void banco::Check_Move_Voi_Black(co* CHESS)
{
	cout << "\nNuoc co the di duoc: ";
	for (int a = 50; a < FindMin(CHESS->getx(), CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() - a == chess[i]->getx()) && (i<=15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() - a, CHESS->gety() - a, 20);
				xuatnuoc(CHESS->getx() - a, CHESS->gety() - a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() - a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() - a == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() - a, CHESS->gety() - a);
			xuatnuoc(CHESS->getx() - a, CHESS->gety() - a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() - a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->gety() - a - 50 == chess[i]->gety()) && (CHESS->getx() - a - 50 == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - a - 50, CHESS->gety() - a - 50, 20);
				xuatnuoc(CHESS->getx() - a - 50, CHESS->gety() - a - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a - 50, CHESS->gety() - a - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		else
		{
			break;
		}
	}
	//.....
	for (int a = 50; a < FindMin(415 - CHESS->getx(), 415 - CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() + a == chess[i]->getx()) && (i<=15) && (a == 50))
			{

				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() + a, CHESS->gety() + a, 20);
				xuatnuoc(CHESS->getx() + a, CHESS->gety() + a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() + a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() + a == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() + a, CHESS->gety() + a);
			xuatnuoc(CHESS->getx() + a, CHESS->gety() + a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() + a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->gety() + a + 50 == chess[i]->gety()) && (CHESS->getx() + a + 50 == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + a + 50, CHESS->gety() + a + 50, 20);
				xuatnuoc(CHESS->getx() + a + 50, CHESS->gety() + a + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a + 50, CHESS->gety() + a + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//......
	for (int a = 50; a < FindMin(CHESS->getx(), 415 - CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() + a == chess[i]->gety()) && (i<=15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() - a, CHESS->gety() + a, 20);
				xuatnuoc(CHESS->getx() - a, CHESS->gety() + a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() + a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() + a == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() - a, CHESS->gety() + a);
			xuatnuoc(CHESS->getx() - a, CHESS->gety() + a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() + a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->getx() - a - 50 == chess[i]->getx()) && (CHESS->gety() + a + 50 == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - a - 50, CHESS->gety() + a + 50, 20);
				xuatnuoc(CHESS->getx() - a - 50, CHESS->gety() + a + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a - 50, CHESS->gety() + a + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//....
	for (int a = 50; a < FindMin(415 - CHESS->getx(), CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() - a == chess[i]->gety()) && (i<=15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() + a, CHESS->gety() - a, 20);
				xuatnuoc(CHESS->getx() + a, CHESS->gety() - a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() - a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() - a == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() + a, CHESS->gety() - a);
			xuatnuoc(CHESS->getx() + a, CHESS->gety() - a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() - a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->getx() + a + 50 == chess[i]->getx()) && (CHESS->gety() - a - 50 == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + a + 50, CHESS->gety() - a - 50, 20);
				xuatnuoc(CHESS->getx() + a + 50, CHESS->gety() - a - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a + 50, CHESS->gety() - a - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		else
		{
			break;
		}
	}
}

void banco::Move_Voi_Black(co* CHESS, int &PosDead, int &st)
{



	setcolor(3);
	circle(CHESS->getx(), CHESS->gety(), 20);
	setcolor(WHITE);
	CHESS->iPos = 0;
	CHESS->move_x[50] = { 0 };
	CHESS->move_y[50] = { 0 };
	Check_Move_Voi_Black(CHESS);
	char nuoc[3];
	cout << "\nNhap nuoc can di: ";
	cin >> nuoc; cin.ignore();
	int nuoc0 = nuoc[0];
	int nuoc1 = nuoc[1];
	if (CheckCanKill2(CHESS, 25 + (nuoc[0] - 97) * 50, 25 + (nuoc[1] - 49) * 50, PosDead) == 0)
	{

		cout << "\n\t\t\t CAN'T MOVE ";
		Sleep(2000);
		st--;
	}
	else
	{
		CHESS->setx(25 + (nuoc[0] - 97) * 50);
		CHESS->sety(25 + (nuoc[1] - 49) * 50);
	}
	ClearAndPrint();
	system("cls");

}

void banco::Check_Move_Hau_Black(co* CHESS)
{
	cout << "\nNuoc co the di duoc: ";
	for (int a = 50; a < CHESS->gety(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()) && (i<=15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() - a, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() - a);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx(), CHESS->gety() - a);
			xuatnuoc(CHESS->getx(), CHESS->gety() - a);
			Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->gety() - a - 50 == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() - a - 50, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() - a - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - a - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		else
		{
			break;
		}
	}
	//....
	for (int a = 50; a < 415 - CHESS->gety(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()) && (i<=15) && (a == 50))
			{

				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() + a, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() + a);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx(), CHESS->gety() + a);
			xuatnuoc(CHESS->getx(), CHESS->gety() + a);
			Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->gety() + a + 50 == chess[i]->gety()) && (CHESS->getx() == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() + a + 50, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() + a + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + a + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//........
	for (int a = 50; a < CHESS->getx(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()) && (i<=15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() - a, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() - a, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() - a, CHESS->gety());
			xuatnuoc(CHESS->getx() - a, CHESS->gety());
			Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety());
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->getx() - a - 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - a - 50, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() - a - 50, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a - 50, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//.....
	for (int a = 50; a < 400 - CHESS->getx(); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()) && (i<=15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() + a, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() + a, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() + a, CHESS->gety());
			xuatnuoc(CHESS->getx() + a, CHESS->gety());
			Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety());
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->getx() + a + 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + a + 50, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() + a + 50, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a + 50, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}

	for (int a = 50; a < FindMin(CHESS->getx(), CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() - a == chess[i]->getx()) && (i<=15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() - a, CHESS->gety() - a, 20);
				xuatnuoc(CHESS->getx() - a, CHESS->gety() - a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() - a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() - a == chess[i]->gety()) && (CHESS->getx() - a == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() - a, CHESS->gety() - a);
			xuatnuoc(CHESS->getx() - a, CHESS->gety() - a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() - a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->gety() - a - 50 == chess[i]->gety()) && (CHESS->getx() - a - 50 == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - a - 50, CHESS->gety() - a - 50, 20);
				xuatnuoc(CHESS->getx() - a - 50, CHESS->gety() - a - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a - 50, CHESS->gety() - a - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		else
		{
			break;
		}
	}
	//.....
	for (int a = 50; a < FindMin(415 - CHESS->getx(), 415 - CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() + a == chess[i]->getx()) && (i<15) && (a == 50))
			{

				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() + a, CHESS->gety() + a, 20);
				xuatnuoc(CHESS->getx() + a, CHESS->gety() + a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() + a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->gety() + a == chess[i]->gety()) && (CHESS->getx() + a == chess[i]->getx()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() + a, CHESS->gety() + a);
			xuatnuoc(CHESS->getx() + a, CHESS->gety() + a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() + a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->gety() + a + 50 == chess[i]->gety()) && (CHESS->getx() + a + 50 == chess[i]->getx()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + a + 50, CHESS->gety() + a + 50, 20);
				xuatnuoc(CHESS->getx() + a + 50, CHESS->gety() + a + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a + 50, CHESS->gety() + a + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//......
	for (int a = 50; a < FindMin(CHESS->getx(), 415 - CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() + a == chess[i]->gety()) && (i<=15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() - a, CHESS->gety() + a, 20);
				xuatnuoc(CHESS->getx() - a, CHESS->gety() + a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() + a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() - a == chess[i]->getx()) && (CHESS->gety() + a == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() - a, CHESS->gety() + a);
			xuatnuoc(CHESS->getx() - a, CHESS->gety() + a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() - a, CHESS->gety() + a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->getx() - a - 50 == chess[i]->getx()) && (CHESS->gety() + a + 50 == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - a - 50, CHESS->gety() + a + 50, 20);
				xuatnuoc(CHESS->getx() - a - 50, CHESS->gety() + a + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - a - 50, CHESS->gety() + a + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}

		}
		else
		{
			break;
		}
	}
	//....
	for (int a = 50; a < FindMin(415 - CHESS->getx(), CHESS->gety()); a += 50)
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() - a == chess[i]->gety()) && (i<=15) && (a == 50))
			{
				dem++;
				setcolor(YELLOW);
				circle(CHESS->getx() + a, CHESS->gety() - a, 20);
				xuatnuoc(CHESS->getx() + a, CHESS->gety() - a);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() - a);
				CHESS->iPos++;
				setcolor(WHITE);
				break;
			}
			if ((CHESS->getx() + a == chess[i]->getx()) && (CHESS->gety() - a == chess[i]->gety()))
			{
				dem++;
			}
		}
		if (dem == 0)
		{
			Draw_Pos(CHESS->getx() + a, CHESS->gety() - a);
			xuatnuoc(CHESS->getx() + a, CHESS->gety() - a);
			Save_Pos_Can_Move(CHESS, CHESS->getx() + a, CHESS->gety() - a);
			CHESS->iPos++;
			int dem2 = 0;
			for (int i = 0; i < 16; i++)
			{
				if ((CHESS->getx() + a + 50 == chess[i]->getx()) && (CHESS->gety() - a - 50 == chess[i]->gety()))
				{
					dem2++;
				}
			}
			if (dem2 != 0)
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + a + 50, CHESS->gety() - a - 50, 20);
				xuatnuoc(CHESS->getx() + a + 50, CHESS->gety() - a - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + a + 50, CHESS->gety() - a - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		else
		{
			break;
		}
	}

}

void banco::Move_Hau_Black(co* CHESS, int &PosDead, int &st)
{


	setcolor(3);
	circle(CHESS->getx(), CHESS->gety(), 20);
	setcolor(WHITE);
	CHESS->iPos = 0;
	CHESS->move_x[50] = { 0 };
	CHESS->move_y[50] = { 0 };
	Check_Move_Hau_Black(CHESS);
	char nuoc[3];
	cout << "\nNhap nuoc can di: ";
	cin >> nuoc;
	int nuoc0 = nuoc[0];
	int nuoc1 = nuoc[1];
	if (CheckCanKill2(CHESS, 25 + (nuoc[0] - 97) * 50, 25 + (nuoc[1] - 49) * 50, PosDead) == 0)
	{

		cout << "\n\t\t\t CAN'T MOVE ";
		Sleep(2000); st--;
	}
	else
	{
		CHESS->setx(25 + (nuoc[0] - 97) * 50);
		CHESS->sety(25 + (nuoc[1] - 49) * 50);
	}
	ClearAndPrint();
	system("cls");

}

void banco::Check_Move_Ma_Black(co* CHESS)
{
	int dem = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() - 100 == chess[i]->gety()))
		{
			dem++;
		}
	}
	if ((dem == 0) && (CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety() - 100 >= 25) && (CHESS->gety() - 100 <= 375))
	{
		Draw_Pos(CHESS->getx() + 50, CHESS->gety() - 100);
		xuatnuoc(CHESS->getx() + 50, CHESS->gety() - 100);
		Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() - 100);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() - 100 == chess[i]->gety()) && (CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety() - 100 >= 25) && (CHESS->gety() - 100 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 50, CHESS->gety() - 100, 20);
				xuatnuoc(CHESS->getx() + 50, CHESS->gety() - 100);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() - 100);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
	//.............

	int dem_1 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() - 100 == chess[i]->gety()))
		{
			dem_1++;
		}
	}
	if ((dem_1 == 0) && (CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() - 100 >= 25) && (CHESS->gety() - 100 <= 375))
	{
		Draw_Pos(CHESS->getx() - 50, CHESS->gety() - 100);
		xuatnuoc(CHESS->getx() - 50, CHESS->gety() - 100);
		Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() - 100);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() - 100 == chess[i]->gety()) && (CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() - 100 >= 25) && (CHESS->gety() - 100 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 50, CHESS->gety() - 100, 20);
				xuatnuoc(CHESS->getx() - 50, CHESS->gety() - 100);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() - 100);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//..........

	int dem_2 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() + 100 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()))
		{
			dem_2++;
		}
	}
	if ((dem_2 == 0) && (CHESS->getx() + 100 >= 25) && (CHESS->getx() + 100 <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375))
	{
		Draw_Pos(CHESS->getx() + 100, CHESS->gety() - 50);
		xuatnuoc(CHESS->getx() + 100, CHESS->gety() - 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() + 100, CHESS->gety() - 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() + 100 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()) && (CHESS->getx() + 100 >= 25) && (CHESS->getx() + 100 <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 100, CHESS->gety() - 50, 20);
				xuatnuoc(CHESS->getx() + 100, CHESS->gety() - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 100, CHESS->gety() - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//..................

	int dem_3 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() + 100 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()))
		{
			dem_3++;
		}
	}
	if ((dem_3 == 0) && (CHESS->getx() + 100 >= 25) && (CHESS->getx() + 100 <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50 <= 375))
	{
		Draw_Pos(CHESS->getx() + 100, CHESS->gety() + 50);
		xuatnuoc(CHESS->getx() + 100, CHESS->gety() + 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() + 100, CHESS->gety() + 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() + 100 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()) && (CHESS->getx() + 100 >= 25) && (CHESS->getx() + 100 <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 100, CHESS->gety() + 50, 20);
				xuatnuoc(CHESS->getx() + 100, CHESS->gety() + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 100, CHESS->gety() + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//.............

	int dem_4 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() + 100 == chess[i]->gety()))
		{
			dem_4++;
		}
	}
	if ((dem_4 == 0) && (CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety() + 100 >= 25) && (CHESS->gety() + 100 <= 375))
	{
		Draw_Pos(CHESS->getx() + 50, CHESS->gety() + 100);
		xuatnuoc(CHESS->getx() + 50, CHESS->gety() + 100);
		Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() + 100);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() + 100 == chess[i]->gety()) && (CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety() + 100 >= 25) && (CHESS->gety() + 100 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 50, CHESS->gety() + 100, 20);
				xuatnuoc(CHESS->getx() + 50, CHESS->gety() + 100);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() + 100);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//...............

	int dem_5 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() + 100 == chess[i]->gety()))
		{
			dem_5++;
		}
	}
	if ((dem_5 == 0) && (CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() + 100 >= 25) && (CHESS->gety() + 100 <= 375))
	{
		Draw_Pos(CHESS->getx() - 50, CHESS->gety() + 100);
		xuatnuoc(CHESS->getx() - 50, CHESS->gety() + 100);
		Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() + 100);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() + 100 == chess[i]->gety()) && (CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() + 100 >= 25) && (CHESS->gety() + 100 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 50, CHESS->gety() + 100, 20);
				xuatnuoc(CHESS->getx() - 50, CHESS->gety() + 100);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() + 100);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//...........

	int dem_6 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() - 100 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()))
		{
			dem_6++;
		}
	}
	if ((dem_6 == 0) && (CHESS->getx() - 100 >= 25) && (CHESS->getx() - 100 <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375))
	{
		Draw_Pos(CHESS->getx() - 100, CHESS->gety() - 50);
		xuatnuoc(CHESS->getx() - 100, CHESS->gety() - 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() + 100, CHESS->gety() - 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() - 100 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()) && (CHESS->getx() - 100 >= 25) && (CHESS->getx() - 100 <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 100, CHESS->gety() - 50, 20);
				xuatnuoc(CHESS->getx() - 100, CHESS->gety() - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 100, CHESS->gety() - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//..................

	int dem_7 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() - 100 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()))
		{
			dem_7++;
		}
	}
	if ((dem_7 == 0) && (CHESS->getx() - 100 >= 25) && (CHESS->getx() - 100 <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50 <= 375))
	{
		Draw_Pos(CHESS->getx() - 100, CHESS->gety() + 50);
		xuatnuoc(CHESS->getx() - 100, CHESS->gety() + 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() - 100, CHESS->gety() + 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() - 100 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()) && (CHESS->getx() - 100 >= 25) && (CHESS->getx() - 100 <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50 <= 375))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 100, CHESS->gety() + 50, 20);
				xuatnuoc(CHESS->getx() - 100, CHESS->gety() + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 100, CHESS->gety() + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

}

void banco::Move_Ma_Black(co* CHESS, int &PosDead, int &st)
{

	setcolor(3);
	circle(CHESS->getx(), CHESS->gety(), 20);
	setcolor(WHITE);
	CHESS->iPos = 0;
	CHESS->move_x[50] = { 0 };
	CHESS->move_y[50] = { 0 };
	Check_Move_Ma_Black(CHESS);
	char nuoc[3];
	cout << "\nNhap nuoc can di: ";
	cin >> nuoc;
	int nuoc0 = nuoc[0];
	int nuoc1 = nuoc[1];
	if (CheckCanKill2(CHESS, 25 + (nuoc[0] - 97) * 50, 25 + (nuoc[1] - 49) * 50, PosDead) == 0)
	{

		cout << "\n\t\t\t CAN'T MOVE ";
		Sleep(2000); st--;
	}
	else
	{
		CHESS->setx(25 + (nuoc[0] - 97) * 50);
		CHESS->sety(25 + (nuoc[1] - 49) * 50);
	}
	ClearAndPrint();
	system("cls");

}

void banco::Check_Move_Vua_Black(co* CHESS)
{
	int dem = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()))
		{
			dem++;
		}
	}
	if ((dem == 0) && (CHESS->getx() >= 25) && (CHESS->getx() <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50 <= 375))
	{
		Draw_Pos(CHESS->getx(), CHESS->gety() + 50);
		xuatnuoc(CHESS->getx(), CHESS->gety() + 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()) && ((CHESS->getx() >= 25) && (CHESS->getx() <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50 <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() + 50, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
	//..........

	int dem2 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()))
		{
			dem2++;
		}
	}
	if ((dem2 == 0) && (CHESS->getx() >= 25) && (CHESS->getx() <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375))
	{
		Draw_Pos(CHESS->getx(), CHESS->gety() - 50);
		xuatnuoc(CHESS->getx(), CHESS->gety() - 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()) && ((CHESS->getx() >= 25) && (CHESS->getx() <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx(), CHESS->gety() - 50, 20);
				xuatnuoc(CHESS->getx(), CHESS->gety() - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//......

	int dem3 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
		{
			dem3++;
		}
	}
	if ((dem3 == 0) && (CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety() >= 25) && (CHESS->gety() <= 375))
	{
		Draw_Pos(CHESS->getx() + 50, CHESS->gety());
		xuatnuoc(CHESS->getx() + 50, CHESS->gety());
		Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety());
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()) && ((CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety() >= 25) && (CHESS->gety() <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 50, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() + 50, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
	//.......

	int dem4 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()))
		{
			dem4++;
		}
	}
	if ((dem4 == 0) && (CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() >= 25) && (CHESS->gety() <= 375))
	{
		Draw_Pos(CHESS->getx() - 50, CHESS->gety());
		xuatnuoc(CHESS->getx() - 50, CHESS->gety());
		Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety());
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() == chess[i]->gety()) && ((CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() >= 25) && (CHESS->gety() <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 50, CHESS->gety(), 20);
				xuatnuoc(CHESS->getx() - 50, CHESS->gety());
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety());
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

	//....

	int dem5 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()))
		{
			dem5++;
		}
	}
	if ((dem5 == 0) && (CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375))
	{
		Draw_Pos(CHESS->getx() - 50, CHESS->gety() - 50);
		xuatnuoc(CHESS->getx() - 50, CHESS->gety() - 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() - 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()) && ((CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 50, CHESS->gety() - 50, 20);
				xuatnuoc(CHESS->getx() - 50, CHESS->gety() - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
	//....

	int dem6 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()))
		{
			dem6++;
		}
	}
	if ((dem6 == 0) && (CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50 <= 375))
	{
		Draw_Pos(CHESS->getx() - 50, CHESS->gety() + 50);
		xuatnuoc(CHESS->getx() - 50, CHESS->gety() + 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() + 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()) && ((CHESS->getx() - 50 >= 25) && (CHESS->getx() - 50 <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50 <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 50, CHESS->gety() + 50, 20);
				xuatnuoc(CHESS->getx() - 50, CHESS->gety() + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
	//....

	int dem7 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()))
		{
			dem7++;
		}
	}
	if ((dem7 == 0) && (CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50 <= 375))
	{
		Draw_Pos(CHESS->getx() + 50, CHESS->gety() + 50);
		xuatnuoc(CHESS->getx() + 50, CHESS->gety() + 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() + 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() + 50 == chess[i]->gety()) && ((CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety() + 50 >= 25) && (CHESS->gety() + 50 <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 50, CHESS->gety() + 50, 20);
				xuatnuoc(CHESS->getx() + 50, CHESS->gety() + 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() + 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
	//....

	int dem8 = 0;
	for (int i = 0; i < 32; i++)
	{
		if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()))
		{
			dem8++;
		}
	}
	if ((dem8 == 0) && (CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375))
	{
		Draw_Pos(CHESS->getx() + 50, CHESS->gety() - 50);
		xuatnuoc(CHESS->getx() + 50, CHESS->gety() - 50);
		Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() - 50);
		CHESS->iPos++;
	}
	else
	{
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()) && ((CHESS->getx() + 50 >= 25) && (CHESS->getx() + 50 <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375)))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 50, CHESS->gety() - 50, 20);
				xuatnuoc(CHESS->getx() + 50, CHESS->gety() - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
}

void banco::Move_Vua_Black(co* CHESS, int &PosDead, int &st)
{

	setcolor(3);
	circle(CHESS->getx(), CHESS->gety(), 20);
	setcolor(WHITE);
	CHESS->iPos = 0;
	CHESS->move_x[50] = { 0 };
	CHESS->move_y[50] = { 0 };
	Check_Move_Vua_Black(CHESS);
	char nuoc[3];
	cout << "\nNhap nuoc can di: ";
	cin >> nuoc;
	int nuoc0 = nuoc[0];
	int nuoc1 = nuoc[1];
	if (CheckCanKill2(CHESS, 25 + (nuoc[0] - 97) * 50, 25 + (nuoc[1] - 49) * 50, PosDead) == 0)
	{

		cout << "\n\t\t\t CAN'T MOVE ";
		Sleep(2000); st--;
	}
	else
	{
		CHESS->setx(25 + (nuoc[0] - 97) * 50);
		CHESS->sety(25 + (nuoc[1] - 49) * 50);
	}
	ClearAndPrint();
	system("cls");

}

void banco::Check_Move_Tot_Black(co* CHESS)
{
	if (CHESS->gety() == 325)
	{
		for (int a = 50; a <= 100; a += 50)
		{
			int dem = 0;
			for (int i = 0; i < 32; i++)
			{
				if ((CHESS->getx() == chess[i]->getx()) && (CHESS->gety() - a == chess[i]->gety()))
				{
					dem++;
				}
			}
			if (dem == 0)
			{
				Draw_Pos(CHESS->getx(), CHESS->gety() - a);
				xuatnuoc(CHESS->getx(), CHESS->gety() - a);
				Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - a);
				CHESS->iPos++;
			}
			else
			{
				break;
			}
		}
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 50, CHESS->gety() - 50, 20);
				xuatnuoc(CHESS->getx() - 50, CHESS->gety() - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		//.....
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 50, CHESS->gety() - 50, 20);
				xuatnuoc(CHESS->getx() + 50, CHESS->gety() - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}
	else
	{
		int dem = 0;
		for (int i = 0; i < 32; i++)
		{
			if ((CHESS->getx() == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()))
			{
				dem++;
			}
		}
		if ((dem == 0) && (CHESS->getx() >= 25) && (CHESS->getx() <= 375) && (CHESS->gety() - 50 >= 25) && (CHESS->gety() - 50 <= 375))
		{
			Draw_Pos(CHESS->getx(), CHESS->gety() - 50);
			xuatnuoc(CHESS->getx(), CHESS->gety() - 50);
			Save_Pos_Can_Move(CHESS, CHESS->getx(), CHESS->gety() - 50);
			CHESS->iPos++;
		}

		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() - 50 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() - 50, CHESS->gety() - 50, 20);
				xuatnuoc(CHESS->getx() - 50, CHESS->gety() - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() - 50, CHESS->gety() - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
		//.....
		for (int i = 0; i < 16; i++)
		{
			if ((CHESS->getx() + 50 == chess[i]->getx()) && (CHESS->gety() - 50 == chess[i]->gety()))
			{
				setcolor(YELLOW);
				circle(CHESS->getx() + 50, CHESS->gety() - 50, 20);
				xuatnuoc(CHESS->getx() + 50, CHESS->gety() - 50);
				Save_Pos_Can_Move(CHESS, CHESS->getx() + 50, CHESS->gety() - 50);
				CHESS->iPos++;
				setcolor(WHITE);
			}
		}
	}

}

void banco::Move_Tot_Black(co* CHESS, int &PosDead, int &st)
{


	setcolor(3);
	circle(CHESS->getx(), CHESS->gety(), 20);
	setcolor(WHITE);
	CHESS->iPos = 0;
	CHESS->move_x[50] = { 0 };
	CHESS->move_y[50] = { 0 };
	Check_Move_Tot_Black(CHESS);
	char nuoc[3];
	cout << "\nNhap nuoc can di: ";
	cin >> nuoc;
	int nuoc0 = nuoc[0];
	int nuoc1 = nuoc[1];
	if (CheckCanKill2(CHESS, 25 + (nuoc[0] - 97) * 50, 25 + (nuoc[1] - 49) * 50, PosDead) == 0)
	{

		cout << "\n\t\t\t CAN'T MOVE ";
		Sleep(2000); st--;
	}
	else
	{
		CHESS->setx(25 + (nuoc[0] - 97) * 50);
		CHESS->sety(25 + (nuoc[1] - 49) * 50);
	}
	if (CHESS->gety() == 25)
	{
		CHESS->setten("hau");
	}
	ClearAndPrint();
	system("cls");

}

void banco::Play_Black(int &p, int &st)
{
	
		int choice;
		cout << "\nNhap quan co can di: \n1.XE\n2.MA\n3.VOI\n4.HAU\n5.VUA\n6.VOI2\n7.MA2\n8.XE2\n9.TOT1\n10.TOT2\n11.TOT3\n12.TOT4\n13.TOT5\n14.TOT6\n15.TOT7\n16.TOT8\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			Move_Xe_Black(chess[16], p,st); break;
		case 2:
			Move_Ma_Black(chess[17], p, st); break;
		case 3:
			Move_Voi_Black(chess[18], p, st); break;
		case 4:
			Move_Hau_Black(chess[19], p, st); break;
		case 5:
			Move_Vua_Black(chess[20], p, st); break;
		case 6:
			Move_Voi_Black(chess[21], p, st); break;
		case 7:
			Move_Ma_Black(chess[22], p, st); break;
		case 8:
			Move_Xe_Black(chess[23], p, st); break;
		case 9:
			Move_Tot_Black(chess[24], p, st); break;
		case 10:
			Move_Tot_Black(chess[25], p, st); break;
		case 11:
			Move_Tot_Black(chess[26], p, st); break;
		case 12:
			Move_Tot_Black(chess[27], p, st); break;
		case 13:
			Move_Tot_Black(chess[28], p, st); break;
		case 14:
			Move_Tot_Black(chess[29], p, st); break;
		case 15:
			Move_Tot_Black(chess[30], p, st); break;
		case 16:
			Move_Tot_Black(chess[31], p, st); break;
		}
	
}