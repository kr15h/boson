#pragma once

#include "ofMain.h"

class Title{
	public:
		void setup();
		void update();
		void draw();
	
		ofRectangle box;
	
		ofTrueTypeFont headerFont;
		ofTrueTypeFont footerFont;
};
