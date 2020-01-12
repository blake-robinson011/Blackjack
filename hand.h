#pragma once
#ifndef hand_h
#define hand_h
#include <vector>
#include "Card.h"

using namespace std;
class hand
{
protected:
	vector<card*> cards;

public:
	void addCard(card* pCard);
	void clearHand();
	int getHandTotal();
	hand();
	~hand();
};

#endif // !hand_h
