#include "GameSource.h"

void GameSource::setup(){
	name = "Game Source";
	
	allocate(800, 800);
	
	boson::scenes::BaseScene * sceneA = new boson::scenes::SceneA();
	scenes.push_back(sceneA);
	
	for(int i = 0; i < scenes.size(); i++){
		scenes[i]->setup();
	}
	
	player.setup();
	sceneA->player = &player;
}

void GameSource::update(){
	for(int i = 0; i < scenes.size(); i++){
		scenes[i]->update();
		
		for(int j = 0; j < scenes[i]->actors.size(); j++){
			if(player.intersects(*scenes[i]->actors[j])){
				if(scenes[i]->actors[j]->type ==
				boson::actors::ActorType::COLLECTIBLE){
					cout << "Hit Collectible" << endl;
				}
				
				if(scenes[i]->actors[j]->type ==
				boson::actors::ActorType::TELEPORT){
					cout << "Hit Teleport" << endl;
				}
			}
		}
	}
}

void GameSource::draw(){
	ofClear(0);

	ofPushStyle();
	ofSetColor(ofColor::beige);
	ofDrawRectangle(0, 0, getWidth(), getHeight());
	ofPopStyle();
	
	for(int i = 0; i < scenes.size(); i++){
		scenes[i]->draw();
	}
}
