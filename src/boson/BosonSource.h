#pragma once

#include "ofMain.h"
#include "ofxPiMapper.h"
#include "BaseScene.h"
#include "SceneA.h"

namespace boson{

class BosonSource : public ofx::piMapper::FboSource{
	public:
		void setup();
		void update();
		void draw();
	
		vector<boson::scenes::BaseScene *> scenes;
};

} // namespace boson