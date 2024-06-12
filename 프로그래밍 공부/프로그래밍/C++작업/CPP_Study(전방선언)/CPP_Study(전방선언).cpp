#include <iostream>
#include <stdlib.h>
using namespace std;
#include "Player.h"

// 오늘의 주제 : 전방선언




int main()
{
	// Player는 몇 바이트?
	// int 2개 = 2 * 4 = 8바이트

	Player p1;	// 지역변수 (Stack)

	Player* p2 = new Player();	// 동적할당 (Heap)


	return 0;
}
