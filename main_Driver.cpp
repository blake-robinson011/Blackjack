
#include "game.h"
using namespace std;

int main()
{

	int playerCount;
	bool playAgain = true;
	string pName;
	while (playAgain == true) {
		cout << "\nWELCOME TO THE GAME OF BLACKJACK!" << endl;
		cout << "\nHow many players? (1-7): ";
		cin >> playerCount;
		vector<string> playerNames;
		for (int i = 0; i < playerCount; i++)
		{
			cout << "\nEnter player no. " << i+1 << "'s first name: ";
			cin >> pName;
			playerNames.push_back(pName);
		}

		game theGame(playerNames);
		theGame.play();
		char choice;
		cout << "\nDo you want to play again? (Y/N) ";
		cin >> choice;
		choice=toupper(choice);
		if (choice == 'Y')
			playAgain = true;
		else playAgain = false;
	}
	
	

	system("pause");
	return 0;
}