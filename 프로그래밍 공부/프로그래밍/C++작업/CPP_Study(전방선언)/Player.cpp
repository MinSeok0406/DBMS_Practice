#include "Player.h"
#include "Monster.h"

void Player::KillMonster()
{

	_target2->KillMe();

	_target2->_hp = 0;


}

void Player::KillMonster2()
{
	_target2->_hp = 0;

}