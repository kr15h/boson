#include "SceneA.h"

namespace boson{
namespace scenes{

void SceneA::setup(){
	boundingBox = ofRectangle(0, 0, 400, 400);
}

void SceneA::update(){

}

void SceneA::draw(){
	ofPushStyle();
	ofSetColor(ofColor::navy);
	ofDrawRectangle(boundingBox);
	ofPopStyle();
}

} // namespace scenes
} // namespace boson