#pragma once

#include "State.h"
#include "ofMain.h"

class TitleState : public State{
	public:
		void setup();
		void update();
		void draw();
	
		ofRectangle box;
	
		ofTrueTypeFont headerFont;
		ofTrueTypeFont footerFont;
};
