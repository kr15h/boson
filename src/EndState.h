#pragma once

#include "State.h"
#include "ofMain.h"

class EndState : public State{
	public:
		void setup();
		void update();
		void draw();
	
		ofRectangle box;
	
		ofTrueTypeFont fontSm;
		ofTrueTypeFont fontMd;
		ofTrueTypeFont fontLg;
};
