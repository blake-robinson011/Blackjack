#include "deck.h"

void deck::createDeck()
{
	
	for (int i = card::CLUBS; i != card::SPADES; i++)
	{
		for (int j = card::ACE; j != card::KING; j++)
		{
			card *pCards = new card(
				static_cast<card::rank>(j), 
				static_cast<card::suit>(i), 
				true); //static cast iterator to an enum
			addCard(pCards);
		}
	}
}

void deck::shuffleDeck()
{
	random_shuffle(cards.begin(), cards.end());
}

void deck::dealCard(hand& aHand)
{	
	
	aHand.addCard(cards.back()); //adds last card in deck to hand
	cards.pop_back();//remove card from deck
	
	
}

void deck::dealAdditionalCards(genericPlayer& aGenericPlayer)
{
	while (aGenericPlayer.isHitting() == true && aGenericPlayer.isBusted() == false)
	{
		
		dealCard(aGenericPlayer);
		cout << "\n" << aGenericPlayer;
		
		
		if (aGenericPlayer.isBusted() == true)
			break;
	}
	

}

deck::deck()
{
	createDeck();
}