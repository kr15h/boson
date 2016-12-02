#pragma once

#include "ofMain.h"

namespace boson{
namespace scenes{

class BaseScene{
	public:
		virtual void setup() = 0;
		virtual void update() = 0;
		virtual void draw() = 0;
	
		ofRectangle boundingBox;
};

} // namespace scenes
} // namespace boson
