#pragma once

#include "ofMain.h"
#include "BaseActor.h"
#include "Player.h"
#include "Collectible.h"
#include "Teleport.h"

namespace boson{
namespace scenes{

class BaseScene{
	public:
		virtual void setup() = 0;
		virtual void update() = 0;
		virtual void draw() = 0;
	
		bool encloses(actors::BaseActor & actor);
	
		ofRectangle boundingBox;
	
		boson::actors::Player * player;
		vector<boson::actors::Collectible *> collectibles;
		vector<boson::actors::Teleport *> teleports;
};

} // namespace scenes
} // namespace boson
