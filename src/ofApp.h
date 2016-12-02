#pragma once

#include "ofMain.h"
#include "ofxPiMapper.h"
#include "BosonSource.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
	
		ofxPiMapper mapper;
		boson::BosonSource game;
};
