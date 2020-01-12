#include "hand.h"

hand::hand()
{
	
}

hand::~hand()
{
	clearHand();
}

void hand::addCard(card* pCard)
{
	cards.push_back(pCard);
}

void hand::clearHand()
{
	for (int j = 0, i = cards.size(); j < i; j++)
	{
		delete cards[j];
	}
	cards.clear();

}

int hand::getHandTotal()
{
	int tempTotal=0;
	
	for (int i = 0; i < cards.size(); i++)
	{	
		tempTotal += cards[i]->getCardValue();
	}
	return tempTotal;
}