#include "Collectible.h"

void Collectible::setup(){
	type = ActorType::COLLECTIBLE;
}

void Collectible::update(){

}

void Collectible::draw(){
	ofPushStyle();
	ofSetColor(ofColor::cyan);
	ofDrawRectangle(boundingBox);
	ofPopStyle();
}
