#include "BaseScene.h"

namespace boson{
namespace scenes{

bool BaseScene::encloses(actors::BaseActor & actor){
	return boundingBox.inside(actor.boundingBox);
}

} // namespace scenes
} // namespace boson
