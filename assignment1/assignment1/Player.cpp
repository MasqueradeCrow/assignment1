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

 void Player::Equip() {
	 cout << "choose a weapon: 1 for pistol, 2 for rifle, 3 for grenade\n";
	 int temp;
	 int wepCounter = 0;
	 cin >> temp;

	 //checks for filled equipment slots
	 for (int i = 0; i < 3; i++) {
		 if (wepChoice[i] != NULL) {
			 wepCounter++;
		 }
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
	 //checks if there is weapon
		 if (wepChoice[0] == NULL) {
			 cout << "You have no weapon equipped\n";
		 }
		 else {
			 cout << "*You shot with the pistol*\n";
		 }
	 
 } 

 void Player::ShootSecondary() {
	 if (wepChoice[1] == NULL) {
		 cout << "You have no weapon equipped\n";
	 }
	 else {
		 cout << "* You shot with the rifle *\n";
	 }
	
}

 void Player::ThrowGrenade() {
	 if (wepChoice[2] == NULL) {
		 cout << "You have no weapon equipped\n";
	 }
	 else {
		 cout << "* You thrown a grenade *\n";
	 }
 }