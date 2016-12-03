#pragma once

#include "ofMain.h"
#include "ofxPiMapper.h"
#include "State.h"
#include "TitleState.h"
#include "GameState.h"

class GameSource : public ofx::piMapper::FboSource{
	public:
		void setup();
		void update();
		void draw();
	
		TitleState title;
		GameState game;
	
		State * state;
};
