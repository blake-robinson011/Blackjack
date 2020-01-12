#include "house.h"

bool house::isHitting()
{
	if (getHandTotal() >= 16)
	{
		return false;
	}
	else return true;
}

void house::flipFirstCard()
{
	cards[0]->flipCard();
}

