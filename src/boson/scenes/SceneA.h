#pragma once

#include "ofMain.h"
#include "BaseScene.h"

namespace boson{
namespace scenes{

class SceneA : public BaseScene{
	public:
		void setup();
		void update();
		void draw();
};

} // namespace scenes
} // namespace boson