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
using namespace std;

int main() {
	Player player;

	player.Equip();
	player.ShootMain();
	player.ShootSecondary();
	player.ThrowGrenade();
	system("PAUSE");
}