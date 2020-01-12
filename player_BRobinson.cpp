#include "player.h"

bool player::isHitting()
{
	char choice;
	cout << "\n" <<  name << ", Do you want to hit? (Y/N) ";
	cin >> choice; 
	choice=toupper(choice);
	if (choice == 'Y') { return true; }
	else return false;
}

player::player(const string& name) :genericPlayer(name) {};

void player::win() { cout << endl << name << " WINS! " << endl; }

void player::lose() { cout << endl << name << " LOSES! " << endl; }

void player::push() { cout << endl << name << " PUSHES." << endl; }


