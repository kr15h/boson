#pragma once

#include "ofMain.h"
#include "ofxPiMapper.h"
#include "GameSource.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
	
		ofxPiMapper mapper;
		GameSource game;
};
