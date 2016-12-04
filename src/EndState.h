#pragma once

#include "State.h"
#include "ofMain.h"

class EndState : public State{
	public:
		void setup();
		void update();
		void draw();
		void setTime(float t);
	
		ofRectangle box;
	
		ofTrueTypeFont fontSm;
		ofTrueTypeFont fontMd;
		ofTrueTypeFont fontLg;

		float gameTime;
};
