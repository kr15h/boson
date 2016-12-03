#include "GameSource.h"

void GameSource::setup(){
	name = "Game Source";
	
	allocate(800, 800);
	
	BaseScene * sceneA = new SceneA();
	scenes.push_back(sceneA);
	
	for(int i = 0; i < scenes.size(); i++){
		scenes[i]->setup();
	}
	
	player.setup();
	sceneA->player = &player;
}

void GameSource::update(){
	// Looping through scenes
	for(int i = 0; i < scenes.size(); i++){
		scenes[i]->update();
		
		// Loop through collectibles of the scene
		for(int j = 0; j < scenes[i]->collectibles.size(); j++){
			if(player.intersects(*scenes[i]->collectibles[j])){
				cout << "Hit Collectible, removing..." << endl;
				scenes[i]->collectibles.erase(scenes[i]->collectibles.begin() + j);
				if(j > 0){
					j--;
					continue;
				}
			}
		}
		
		for(int j = 0; j < scenes[i]->teleports.size(); j++){
			if(player.intersects(*scenes[i]->teleports[j])){
				cout << "Hit Teleport, teleporting..." << endl;
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
