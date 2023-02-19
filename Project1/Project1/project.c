#define   _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct Game 
{
	char name[20];
	int price;
};

int main()
{
	struct Game g1 = { "Wallpaper Engine",19 };
	struct Game* pg = &g1;
	printf("游戏名：%s\n",pg->name);
	printf("游戏价格：%d\n", pg->price);
	return 0;
}