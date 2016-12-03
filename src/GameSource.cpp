#include "GameSource.h"

void GameSource::setup(){
	name = "Game Source";
	allocate(800, 800);
	
	titleState.setup();
	gameState.setup();
	endState.setup();
	
	activeState = &titleState;
}

void GameSource::update(){
	activeState->update();
}

void GameSource::draw(){
	ofClear(0);
	activeState->draw();
}
