#include "BosonSource.h"

namespace boson{

void BosonSource::setup(){
	name = "Boson";
	allocate(800, 800);
	
	boson::scenes::BaseScene * sceneA = new boson::scenes::SceneA();
	scenes.push_back(sceneA);
	
	for(int i = 0; i < scenes.size(); i++){
		scenes[i]->setup();
	}
}

void BosonSource::update(){
	for(int i = 0; i < scenes.size(); i++){
		scenes[i]->update();
	}
}

void BosonSource::draw(){
	ofClear(0);

	ofPushStyle();
	ofSetColor(ofColor::beige);
	ofDrawRectangle(0, 0, getWidth(), getHeight());
	ofPopStyle();
	
	for(int i = 0; i < scenes.size(); i++){
		scenes[i]->draw();
	}
}

} // namespace boson
