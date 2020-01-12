#pragma once
#ifndef game_h
#define game_h
#include "genericPlayer.h"
#include"deck.h"
#include "player.h"
#include "house.h"
class game {

private:
	deck theDeck;
	house theHouse;
	vector<player> thePlayers;

public:
	game(vector<string> & names);
	~game();
	void play();


};
#endif // !game_h
