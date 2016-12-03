#include "SceneA.h"

namespace boson{
namespace scenes{

void SceneA::setup(){
	player = 0;
	boundingBox = ofRectangle(0, 0, 400, 400);
	
	// Create Teleports
	boson::actors::Teleport * t1 = new boson::actors::Teleport();
	t1->boundingBox = ofRectangle(0, 100, 20, 200);
	teleports.push_back(t1);
	
	// Create Collectibles
	boson::actors::Collectible * c1 = new boson::actors::Collectible();
	c1->boundingBox = ofRectangle(200, 160, 40, 40);
	collectibles.push_back(c1);
	
	// Setup all Teleports
	for(int i = 0; i < teleports.size(); i++){
		teleports[i]->setup();
	}
	
	// Setup all Collectibles
	for(int i = 0; i < collectibles.size(); i++){
		collectibles[i]->setup();
	}
}

void SceneA::update(){
	if(player != 0){
		player->update();
	}
}

void SceneA::draw(){
	ofPushStyle();
	ofSetColor(ofColor::navy);
	ofDrawRectangle(boundingBox);
	ofPopStyle();
	
	if(player != 0){
		player->draw();
	}
	
	for(int i = 0; i < teleports.size(); i++){
		teleports[i]->draw();
	}
	
	for(int i = 0; i < collectibles.size(); i++){
		collectibles[i]->draw();
	}
}

} // namespace scenes
} // namespace boson