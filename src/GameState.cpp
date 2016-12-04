#include "GameState.h"

GameState::GameState(){
	box = ofRectangle(0, 0, 800, 800);
	teleport = 0;
}

void GameState::setup(){
	Collectible * c1 = createCollectible(200, 300);
	addCollectible(c1);
	
	Collectible * c2 = createCollectible(250, 100);
	addCollectible(c2);
	
	Collectible * c3 = createCollectible(100, 250);
	addCollectible(c3);
	
	player.box.x = 50;
	player.box.y = 50;
}

void GameState::update(){
	player.update();
	
	// Check if player collides with collectibles
	for(int i = 0; i < collectibles.size(); i++){
		Collectible * collectible = collectibles[i];
		if(player.touches(collectible)){
			removeCollectible(collectible);
		}
	}
	
	// Check teleport contition
	if(teleport == 0 && collectibles.size() <= 0){
		teleport = new Teleport();
		teleport->box.x = box.width - teleport->box.width;
		teleport->box.y = (box.height - teleport->box.height) / 2.0f;
	}
	
	// Check win condition
	if(teleport != 0 && player.box.intersects(teleport->box)){
		delete teleport;
		teleport = 0;
		ofSendMessage(ofMessage("GAME OVER"));
	}
}

void GameState::draw(){
	// Draw background
	ofPushStyle();
	ofSetColor(ofColor::lightYellow);
	ofDrawRectangle(box);
	ofPopStyle();

	// Draw player
	player.draw();
	
	// Draw all collectibles
	for(int i = 0; i < collectibles.size(); i++){
		collectibles[i]->draw();
	}
	
	// Draw teleport
	if(teleport != 0){
		teleport->draw();
	}
}

Collectible * GameState::createCollectible(int x, int y){
	Collectible * c = new Collectible();
	c->box.x = x;
	c->box.y = y;
	return c;
}

void GameState::addCollectible(Collectible * c){
	collectibles.push_back(c);
}

void GameState::removeCollectible(Collectible * c){
	for(int i = 0; i < collectibles.size(); i++){
		if(collectibles[i] == c){
			collectibles.erase(collectibles.begin() + i);
			return;
		}
	}
}
