#include "ofApp.h"

void ofApp::setup(){
	ofSetCircleResolution(100);
	ofBackground(0);
	mapper.registerFboSource(gameSource);
	mapper.setup();
}

void ofApp::update(){
	mapper.update();
}

void ofApp::draw(){
	mapper.draw();
}

void ofApp::messageReceived(ofMessage & message){
	if(message.message == "START GAME"){
		gameSource.activeState = &gameSource.gameState;
	}else if(message.message == "GAME OVER"){
		gameSource.setup();
		gameSource.activeState = &gameSource.endState;
	}
}
