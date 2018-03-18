#include "Player.h"
#include "Weapon.h"
#include <iostream>

using namespace std;

Player::Player()
{
	wepChoice[0] = NULL;
	wepChoice[1] = NULL;
	wepChoice[2] = NULL;
}

Player::~Player()
{
}

 void Player::Equip(Weapon w) {
	 w.type;
	 cout << "choose a weapon: 1 for pistol, 2 for rifle, 3 for grenade\n";
	 //player input 
	 int temp;
	 cin >> temp;
	 //checks for filled equipment slots
	 for (int i = 0; i < 3; i++) {
	
		 switch (temp) {
		 case 1:
			 //pistol
			 wepChoice[0] = 1;
			 break;
		 case 2:
			 //rifle
			 wepChoice[1] = 2;
			 break;
		 case 3:
			 //grenade
			 wepChoice[2] = 3;
			 break;
		 default:
			 cout << "invalid choice\n";
			 Equip();
			 break;
		 }
	 }
	 cout << "*You finished equipping your weapons*\n";
}

 void Player::ShootMain() {
	 //checks if there is weapon equipped
		 if (wepChoice[0] == NULL) {

			 cout << "You have no weapon equipped\n";
		 }
		 else {
			 wepChoice[0].shoot();
			 cout << "[Pistol equipped]\n";
			 cout << "*You shot with the pistol*\n";
		 }
	 
 } 

 void Player::ShootSecondary() {
	 //checks if there is weapon equipped
	 if (wepChoice[1] == NULL) {
		 cout << "You have no weapon equipped\n";
	 }
	 else {

		 cout << "[Rifle equipped]\n";
		 cout << "* You shot with the rifle *\n";
	 }
	
}

 void Player::ThrowGrenade() {
	 //checks if there is weapon equipped
	 if (wepChoice[2] == NULL) {
		 cout << "You have no weapon equipped\n";
	 }
	 else {
		 cout << "[Grenade equipped]\n";
		 cout << "* You thrown a grenade *\n";
	 }
 }