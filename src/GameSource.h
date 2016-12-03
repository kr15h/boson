#pragma once

#include "ofMain.h"
#include "ofxPiMapper.h"
#include "Game.h"
#include "Title.h"

class GameSource : public ofx::piMapper::FboSource{
	public:
		void setup();
		void update();
		void draw();
	
		Title title;
		Game game;
};
