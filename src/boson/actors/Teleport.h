#pragma once

#include "ofMain.h"
#include "BaseActor.h"

namespace boson{
namespace actors{

class Teleport : public BaseActor{
	public:
		void setup();
		void update();
		void draw();
};

}
}