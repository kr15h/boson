#pragma once

#include "ofMain.h"
#include "Collectible.h"

class Player{
	public:
		Player();
		
		void update();
		void draw();
	
		bool touches(Collectible * c);
	
		ofRectangle box;
};
