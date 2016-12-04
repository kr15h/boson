#pragma once

#include "State.h"
#include "ofMain.h"
#include "Player.h"
#include "Collectible.h"
#include "Teleport.h"

class GameState : public State{
	public:
		GameState();

		void setup();
		void update();
		void draw();
	
		Collectible * createCollectible(int x, int y);
		void addCollectible(Collectible * c);
		void removeCollectible(Collectible * c);
	
		ofRectangle box;
	
		Player player;
		vector<Collectible *> collectibles;
		Teleport * teleport;
};
