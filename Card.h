#pragma once
#ifndef card_h
#define card_h
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class card {

public:
	enum rank { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };
	enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};
	card(rank r = ACE, suit s= CLUBS, bool ifu = true);
	int getCardValue();
	void flipCard();
	friend ostream& operator<<(ostream&, const card&);

private:
	rank cardRank;
	suit cardSuit;
	bool cardisFaceUp; //false is 0 (facedown)
};


#endif // !card_h
