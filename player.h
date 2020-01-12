#pragma once
#ifndef player_h
#define player_h
#include "genericPlayer.h"

class player:public genericPlayer{

public:
	player(const string& name);
	~player() {};
	bool isHitting();
	void win();
	void lose();
	void push();
};

#endif // !player_h
