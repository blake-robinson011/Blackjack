#include "Card.h"

ostream& operator<<(ostream& osObject, const card& oObject)
{
	char tempSuit, tempRank;
	string upsideDown = "XX";
	if (oObject.cardSuit == 0)
		tempSuit = 'c';
	if (oObject.cardSuit == 1)
		tempSuit = 'd';
	if (oObject.cardSuit == 2)
		tempSuit = 'h';
	if (oObject.cardSuit == 3)
		tempSuit = 's';
	if (oObject.cardRank == 1)
		tempRank = 'A';
	if (oObject.cardRank == 11)
		tempRank = 'J';
	if (oObject.cardRank == 12)
		tempRank = 'Q';
	if (oObject.cardRank == 13)
		tempRank = 'K';
	
	if (oObject.cardRank > 10 || oObject.cardRank < 2)
	{
		if (oObject.cardisFaceUp) {
			osObject << tempRank << "" << tempSuit;
			return osObject;
		}
		else {
			osObject << upsideDown;
			return osObject;
		}
	}
	else {
		if (oObject.cardisFaceUp) {
			osObject << oObject.cardRank << tempSuit;
			return osObject;
		}
		else {
			osObject << upsideDown;
			return osObject;
		}
	}
}

card::card(rank r, suit s, bool ifu)
{
	cardRank = r;
	cardSuit = s;
	cardisFaceUp = ifu;
}

int card::getCardValue()
{
	if (cardisFaceUp == true) {
		if (cardRank > 10)
		{
			return 10;
		}
		else
			return cardRank;
	}
	else
		return 0;
	
}

void card::flipCard()
{
	if (cardisFaceUp == true)
		cardisFaceUp = false;
	if (cardisFaceUp == false)
		cardisFaceUp = true;
}

