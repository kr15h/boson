#include "Game.h"

Game::Game(){
	box = ofRectangle(0, 0, 800, 800);
}

void Game::setup(){
	Collectible * c1 = createCollectible(200, 300);
	addCollectible(c1);
	
	Collectible * c2 = createCollectible(250, 100);
	addCollectible(c2);
	
	Collectible * c3 = createCollectible(100, 250);
	addCollectible(c3);
	
	player.box.x = 50;
	player.box.y = 50;
}

void Game::update(){
	player.update();
	
	// Check if player collides with collectibles
	for(int i = 0; i < collectibles.size(); i++){
		Collectible * collectible = collectibles[i];
		if(player.touches(collectible)){
			removeCollectible(collectible);
		}
	}
	
	// Check win condition
	if(collectibles.size() <= 0){
		cout << "Game Over" << endl;
		ofSendMessage(ofMessage("YESS"));
	}
}

void Game::draw(){
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
}

Collectible * Game::createCollectible(int x, int y){
	Collectible * c = new Collectible();
	c->box.x = x;
	c->box.y = y;
	return c;
}

void Game::addCollectible(Collectible * c){
	collectibles.push_back(c);
}

void Game::removeCollectible(Collectible * c){
	for(int i = 0; i < collectibles.size(); i++){
		if(collectibles[i] == c){
			collectibles.erase(collectibles.begin() + i);
			return;
		}
	}
}
