#include "BaseScene.h"

bool BaseScene::encloses(BaseActor & actor){
	return boundingBox.inside(actor.boundingBox);
}
