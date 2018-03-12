#pragma once
#ifndef _WEAPON_H
#define _WEAPON_H
class Weapon
{
	enum weapon {pistol, rifle, grenade};
public:
	Weapon();
	~Weapon();
private:
	void Bullet();
	void Grenade();

	int bullets;
	int grenades;

};

#endif // !_WEAPON_H
