#include "GameSource.h"

void GameSource::setup(){
	name = "Game Source";
	allocate(800, 800);
	
	title.setup();
	game.setup();
}

void GameSource::update(){

	title.update();
	game.update();
}

void GameSource::draw(){
	ofClear(0);
	game.draw();
	title.draw();
}
