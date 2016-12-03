#include "GameSource.h"

void GameSource::setup(){
	name = "Game Source";
	allocate(800, 800);
	
	title.setup();
	game.setup();
	
	state = &title;
}

void GameSource::update(){
	state->update();
}

void GameSource::draw(){
	ofClear(0);
	state->draw();
}
