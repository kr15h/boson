#pragma once

#include "ofMain.h"
#include "ofxPiMapper.h"
#include "BaseScene.h"
#include "SceneA.h"
#include "Player.h"

class GameSource : public ofx::piMapper::FboSource{
	public:
		void setup();
		void update();
		void draw();
	
		vector<BaseScene *> scenes;
	
		Player player;
};
