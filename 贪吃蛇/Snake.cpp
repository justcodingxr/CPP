#include <stdio.h>
#include <conio.h>
#include<windows.h>
#include  <graphics.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib");

#define WIN_WIDTH  640
#define WIN_HEIGHT 500
#define MAX_SNAKE 100000
#include <time.h>

struct Snake_tlg {
	int num;//����
	int dir;//����
	int score;
	int size;//�ֶ�
	POINT coor[MAX_SNAKE];//����ڵ�,�ṹ��

}snake;

struct Food {
	POINT fd;
	int flag;
	DWORD color;
}food;
enum DIR {//����
	UP,
	DOWN,
	LEFT,
	RIGHT,
};
void GameInit() {
	snake.num = 3;
	snake.dir = RIGHT;
	snake.score = 0;
	snake.size = 10;
	snake.coor[2].x = 0;//β��
	snake.coor[2].y = 0;
	snake.coor[1].x = 0 + snake.size;
	snake.coor[1].y = 0;
	snake.coor[0].x = 0 + 2*snake.size;//ͷ��
	snake.coor[0].y = 0;
	//��ʼ����
	srand(time(0));
	food.fd.x = (rand() % (WIN_WIDTH/11))*10;
	food.fd.y = (rand() % (WIN_HEIGHT/11))*10;
	//food.color  RGB(rand() % 255, rand()% 255��rand() % 255);
	food.color = RGB(255, 0, 0);
	food.flag = 1;
	//mciSendString(L"open ./bgm.mp3 alias bgm", 0, 0, 0);//������
	//mciSendString(L"open bgm repeat", 0, 0, 0);//��������
	mciSendString("open ��Զ�� - ��ò���.mp3 alias a",0,0,0);
	mciSendString( "open a repeat",0,0,0);
}

void GameDraw() {
	//���ñ�����ɫ
	setbkcolor(RGB(80,80,120));
	cleardevice();//��ʼ��

	//��snake
	 {
		setfillcolor(GREEN);
		//���ñ߿���ɫ
		setlinecolor(BLACK);
		//С��������Ϳ�ȸ߶�
		fillrectangle(snake.coor[0].x, snake.coor[0].y,
			snake.coor[0].x + snake.size,
			snake.coor[0].y + snake.size);
	}
	for (int i = 1; i < snake.num; i++) {
		setfillcolor(YELLOW);
		//���ñ߿���ɫ
		setlinecolor(BLACK);
		//С��������Ϳ�ȸ߶�
		fillrectangle(snake.coor[i].x, snake.coor[i].y,
			snake.coor[i].x+snake.size, 
			snake.coor[i].y+snake.size);
	}
	
	//��food
	if (food.flag == 1) {
		setfillcolor(food.color);
		fillellipse(food.fd.x, food.fd.y, food.fd.x + 10, food.fd.y + 10);
	}
	//��ʾ����
	char temp[20] = " ";
	sprintf_s(temp, "score:%d", snake.score);
	outtextxy(20, 20, temp);
}

void SnakeMove() {//ÿһ�����嶼����һ�ڵ�����
	for (int i = snake.num - 1; i > 0; i--) {//ͷ��û��ǰ�ڵ�
		snake.coor[i].x = snake.coor[i - 1].x;
		snake.coor[i].y = snake.coor[i - 1].y;
		}
	
	switch (snake.dir) {
		case UP:
			snake.coor[0].y -= 10;
			if (snake.coor[0].y < 0)
				snake.coor[0].y = WIN_HEIGHT;
			break;
		case DOWN:
			snake.coor[0].y += 10;
			if (snake.coor[0].y > WIN_HEIGHT)
				snake.coor[0].y = 0;
			break;
		case LEFT:
			snake.coor[0].x -= 10;
			if (snake.coor[0].x < 0)
				snake.coor[0].x = WIN_WIDTH;
			break;
		case RIGHT:
			snake.coor[0].x += 10;//��ͷ�ƶ�
			if (snake.coor[0].x > WIN_WIDTH)
				snake.coor[0].x = 0;
			break;
		default:
			break;
	}
		

}
void KeyControl() {
	//ʹ��win32API��ȡ������Ϣ
	if (GetAsyncKeyState(VK_UP)) {
		if(snake.dir != DOWN)//���ܷ���
			snake.dir = UP;
	}
	if (GetAsyncKeyState(VK_DOWN)) {
		if(snake.dir != UP)
		snake.dir = DOWN;
	}
	if (GetAsyncKeyState(VK_RIGHT)) {
		if(snake.dir != LEFT)
		snake.dir = RIGHT;
	}
	if (GetAsyncKeyState(VK_LEFT)) {
		if(snake.dir != RIGHT)
		snake.dir = LEFT;
	}
}

void Eat() {
	if (food.flag==1&&snake.coor[0].x==food.fd.x&&snake.coor[0].y==food.fd.y) {
		snake.score +=10;
		snake.num++;
		food.flag = 0;
	}
	if (food.flag == 0) {
		food.fd.x = (rand() % (WIN_WIDTH / 10)) * 10;
		food.fd.y = (rand() % (WIN_HEIGHT / 10)) * 10;
		food.color = RGB(255, 0, 0);
		food.flag = 1;
	}
}
void DontEatmyself() {
	for (int i = 4; i < snake.num; i++) {
		if (snake.coor[0].x == snake.coor[i].x&&
			snake.coor[0].y == snake.coor[i].y)
		{
			outtextxy(280, 230, "Game Over!");
			FlushBatchDraw();
			_getch();
			getchar();
			exit(666);
		}
	}
}

int main() {
	//��ʾ����
	initgraph(WIN_WIDTH,WIN_HEIGHT,SHOWCONSOLE);

	GameInit();
	BeginBatchDraw();
	while (1) {
		BeginBatchDraw();
		SnakeMove();//�ƶ�
		
		GameDraw();//����
		Eat();	
		KeyControl();
		
		DontEatmyself();
		FlushBatchDraw();
		Sleep(70);//�ӳٲ�����ʱ����ʾ 
	}
	
	EndBatchDraw();
	closegraph();
	return 0;
}