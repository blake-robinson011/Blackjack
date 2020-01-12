#pragma once
#ifndef genericPlayer_h
#define genericPlayer_h
#include "hand.h"
#include <string>
using namespace std;
class genericPlayer : public hand {

protected:
	string name;

public:
	

	genericPlayer(const string& gName):hand() { name = gName; }
	virtual bool isHitting() = 0;
	bool isBusted() {
		if (getHandTotal() > 21)
		{
			
			return true;
		}

		else return false;
	}
	void bust() { cout <<"\n\n" << name << " bust's, better luck next time!" << endl; }

	
	friend ostream& operator<<(ostream& osObject, genericPlayer& oObject)
	{
		osObject << oObject.name;
		for (int i = 0; i < oObject.cards.size(); i++) {
			
			cout  << " "<< *oObject.cards[i] << " ";
		}
		osObject << " (" << oObject.getHandTotal() << ")";

			return osObject;

	}
	
	~genericPlayer() {};

};

#endif // !genericPlayer_h
