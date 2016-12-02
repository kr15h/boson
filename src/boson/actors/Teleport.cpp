#include "Teleport.h"

namespace boson{
namespace actors{

void Teleport::setup(){
	type = ActorType::TELEPORT;
}

void Teleport::update(){

}

void Teleport::draw(){
	ofPushStyle();
	ofSetColor(ofColor::cyan);
	ofDrawRectangle(boundingBox);
	ofPopStyle();
}

} // namespace actors
} // boson
