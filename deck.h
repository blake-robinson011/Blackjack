#pragma once
#ifndef deck_h
#define deck_h
#include "hand.h"
#include "genericPlayer.h"
#include <algorithm>

class deck : public hand {
public:
	void createDeck();
	void shuffleDeck();
	void dealCard(hand& aHand);
	void dealAdditionalCards(genericPlayer& aGenericPlayer);
	deck();
	

};

#endif // !deck_h
