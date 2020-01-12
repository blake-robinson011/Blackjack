#pragma once
#ifndef house_h
#define house_h
#include "genericPlayer.h"

class house:public genericPlayer{

public:
	bool isHitting();
	void flipFirstCard();
	house(const string& name = "House") :genericPlayer(name) {};
	~house() {};
};

#endif // !hand_h
