#pragma once

#include "ofMain.h"
#include "ofxPiMapper.h"
#include "State.h"
#include "TitleState.h"
#include "GameState.h"
#include "EndState.h"

class GameSource : public ofx::piMapper::FboSource{
	public:
		void setup();
		void update();
		void draw();
	
		TitleState titleState;
		GameState gameState;
		EndState endState;
	
		State * activeState;
};
