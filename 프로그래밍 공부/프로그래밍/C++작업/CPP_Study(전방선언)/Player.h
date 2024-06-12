#pragma once

//1.#include "Monster.h"

//class Monster;

class Player
{
public:

	void KillMonster();

	void KillMonster2();


public:
	int _hp;
	int _attack;

	//1.Monster _target;
	class Monster* _target2;
	Player* _target;
};

