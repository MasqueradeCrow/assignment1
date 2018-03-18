#include <iostream>
#include <Engine.h>
#include "Player.h"
#include "Weapon.h"

//int main(int argc, char** argv) {
//	Engine e;
//	e.print();
//
//	system("PAUSE");
//	return 0;
int main() {
	Player player;
	Weapon p;

	player.Equip(p);

	player.ShootMain();
	player.ShootSecondary();
	player.ThrowGrenade();
	system("PAUSE");
}