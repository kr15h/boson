#pragma once

#include "ofMain.h"
#include "BaseActor.h"

class Collectible : public BaseActor{
	public:
		void setup();
		void update();
		void draw();
};
