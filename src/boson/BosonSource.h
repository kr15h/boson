#pragma once

#include "ofMain.h"
#include "ofxPiMapper.h"

namespace boson{

class BosonSource : public ofx::piMapper::FboSource{
	public:
		void setup();
		void update();
		void draw();
};

} // namespace boson