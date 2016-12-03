#include "GameSource.h"

void GameSource::setup(){
	name = "Game Source";
	allocate(800, 800);
	stage.setup();
}

void GameSource::update(){
	stage.update();
}

void GameSource::draw(){
	ofClear(0);
	stage.draw();
}
