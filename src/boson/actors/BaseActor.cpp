#include "BaseActor.h"

bool BaseActor::intersects(BaseActor & anotherActor){
	return boundingBox.intersects(anotherActor.boundingBox);
}
