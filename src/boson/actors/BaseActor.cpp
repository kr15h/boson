#include "BaseActor.h"

namespace boson{
namespace actors{

bool BaseActor::intersects(BaseActor & anotherActor){
	return boundingBox.intersects(anotherActor.boundingBox);
}

} // namespace actors
} // namespace boson
