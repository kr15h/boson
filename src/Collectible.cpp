#include "Collectible.h"

Collectible::Collectible(){
	box = ofRectangle(0, 0, 30, 30);
}

void Collectible::draw(){
	ofPushStyle();
	ofSetColor(ofColor::orangeRed);
	ofDrawRectangle(box);
	ofPopStyle();
}
