#pragma once

#include "ofMain.h"
#include "ofxPiMapper.h"
#include "Stage.h"

class GameSource : public ofx::piMapper::FboSource{
	public:
		void setup();
		void update();
		void draw();
	
		Stage stage;
};
