#include "BosonSource.h"

namespace boson{

void BosonSource::setup(){
	name = "Boson";
	allocate(800, 800);
}

void BosonSource::update(){

}

void BosonSource::draw(){
	ofPushStyle();
	ofSetColor(ofColor::beige);
	ofDrawRectangle(0, 0, getWidth(), getHeight());
	ofPopStyle();
}

} // namespace boson
