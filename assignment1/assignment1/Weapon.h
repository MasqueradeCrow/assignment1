#pragma once
#ifndef _WEAPON_H
#define _WEAPON_H
enum class WeaponType {
	PISTOL,
	RIFLE,
	GRENADE,
};
class Weapon
{
public:
	int type;

	Weapon(WeaponType wt);
	virtual ~Weapon();

	void shoot();
//private:
//	//void Bullet();
//	//void Grenade();
//
//	//int bullets;
//	//int grenades;

};

#endif // !_WEAPON_H
