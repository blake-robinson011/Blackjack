#include "game.h"
using namespace std;
game::game(vector<string> & names)
{
	//assign vector of names passed from parameter
	
	for (int i = 0; i < names.size(); i++)
	{

		thePlayers.push_back(player(names[i]));
	}

	//create and shuffle deck
	theDeck.createDeck();
	theDeck.shuffleDeck();
}

game::~game(){}

void game::play()
{
	//deal each player and the house two cards to start
	int j = 0;
	while (j < 2) {
		for (int i = 0; i < thePlayers.size(); i++)
		{	
			theDeck.dealCard(thePlayers[i]);//deals one card to each player

		}
		theDeck.dealCard(theHouse);//then one to the house
		j++; 
	}
	theHouse.flipFirstCard();

	//each player and the house now have two cards
	//houses first card is face down
	
	
		
		for (int i = 0; i < thePlayers.size(); i++)
		{
			cout << thePlayers[i] << endl;
		}
		cout << theHouse;

		//shows all players hand and the house

		for (int i = 0; i < thePlayers.size(); i++)
		{
			theDeck.dealAdditionalCards(thePlayers[i]);
			if(thePlayers[i].isBusted()==true)
			{
				thePlayers[i].bust();
			}
			
		}
		//all players have additional cards 
		//those who bust should have been notified
	
	theDeck.dealAdditionalCards(theHouse);
	//cout << "\n" << theHouse << endl;
	
	if (theHouse.isBusted() == true)
		
	{	theHouse.bust();
		for (int i = 0; i < thePlayers.size(); i++)
		{
			if ((thePlayers[i].isBusted() == false) && (thePlayers[i].getHandTotal() > theHouse.getHandTotal()))
				thePlayers[i].win();
		}
	}

	
	if (theHouse.isBusted() == false) {
		cout << "\n" << theHouse << endl;
		for (int i = 0; i < thePlayers.size(); i++)
		{

			if (theHouse.getHandTotal() < thePlayers[i].getHandTotal() && (thePlayers[i].isBusted() == false))
			{
				thePlayers[i].win();
			}
			else if (thePlayers[i].getHandTotal() < theHouse.getHandTotal() || thePlayers[i].isBusted()) {
				thePlayers[i].lose();
			}
			else if (thePlayers[i].getHandTotal() == theHouse.getHandTotal()) {
				thePlayers[i].push();

			}
		}
		for (int i = 0; i < thePlayers.size(); i++) {
			thePlayers[i].clearHand();
			theHouse.clearHand();
		}
	}

	
}