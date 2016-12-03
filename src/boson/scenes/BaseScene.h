#pragma once

#include "ofMain.h"
#include "BaseActor.h"
#include "Player.h"
#include "Collectible.h"
#include "Teleport.h"

class BaseScene{
	public:
		virtual void setup() = 0;
		virtual void update() = 0;
		virtual void draw() = 0;
	
		bool encloses(BaseActor & actor);
	
		ofRectangle boundingBox;
	
		Player * player;
		vector<Collectible *> collectibles;
		vector<Teleport *> teleports;
};
