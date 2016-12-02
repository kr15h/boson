#pragma once

#include "ofMain.h"

namespace boson{
namespace actors{

enum ActorType{
	PLAYER,
	COLLECTIBLE,
	TELEPORT
};

class BaseActor{
	public:
		virtual void setup() = 0;
		virtual void update() = 0;
		virtual void draw() = 0;
	
		virtual bool intersects(BaseActor & anotherActor);
	
		ofRectangle boundingBox;
	
		ActorType type;
	
};

} // namespace actors
} // namespace boson
