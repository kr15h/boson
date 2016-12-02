#pragma once

#include "ofMain.h"
#include "BaseActor.h"

namespace boson{
namespace actors{

class Player : public BaseActor{
	public:
		void setup();
		void update();
		void draw();

};

} // namespace actors
} // namespace boson