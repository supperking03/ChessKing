#include "graphics.h"
#include "banco.h"

using namespace std;

void KhoiTaoBanCo()
{
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
}
int main( )
{
	//Khởi tạo cửa số window có kích thước (1024,768)
    initwindow(900, 900, "First Sample");
	//		 0,0 _ _ _ _ width,0
	//			|	    |
	//			|	    |
	//0,height	|_ _ _ _| width,height
	
	////Hàm vẽ 1 đường thằng từ điểm (0,0) -> (10,10)
	//setcolor(YELLOW);
	//line(0,0,50,50);

	////Hàm vẽ 1 điểm với kích thước là 10 pixel, tại tọa độ (100,100) có màu trắng
	//setcolor(WHITE);
	//fillellipse(100,100,10,10);
	/*settextjustify(1, 1);*/
	//outtextxy(25, 25, "XE1");
	//outtextxy(75, 25, "MA1");
	//outtextxy(125, 25, "VOI1");
	//outtextxy(175, 25, "HAU");
	//outtextxy(225, 25, "VUA");
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

	
	banco a;
	a.ClearAndPrint();
	a.playGame();
	cout << "\t\t\t>>>>>>>>>>>GAME OVER<<<<<<<<<<<<<\n";
	system("pause");
    return 0;
}