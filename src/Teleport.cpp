#include "Teleport.h"

Teleport::Teleport(){
	box = ofRectangle(0, 0, 20, 120);
}

void Teleport::draw(){
	ofPushStyle();
	ofSetColor(ofColor::red);
	ofDrawRectangle(box);
	ofPopStyle();
}
