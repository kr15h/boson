#pragma once

#include "ofMain.h"
#include "Player.h"
#include "Collectible.h"

class Game{
	public:
		Game();

		void setup();
		void update();
		void draw();
	
		Collectible * createCollectible(int x, int y);
		void addCollectible(Collectible * c);
		void removeCollectible(Collectible * c);
	
		ofRectangle box;
	
		Player player;
		vector<Collectible *> collectibles;
};
