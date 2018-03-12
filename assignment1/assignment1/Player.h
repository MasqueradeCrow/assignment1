#pragma once
#ifndef _PLAYER_H
#define _PLAYER_H

class Player
{
public:
	Player();
	~Player();

	void Equip();
	void ShootMain();
	void ShootSecondary();
	void ThrowGrenade();

	int wepChoice[3];
};
#endif // !_PLAYER_H


