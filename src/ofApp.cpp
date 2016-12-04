#include "ofApp.h"

void ofApp::setup(){
	ofSetCircleResolution(100);
	ofBackground(0);
	mapper.registerFboSource(gameSource);
	mapper.setup();
	startTime = 0.0f;
}

void ofApp::update(){
	mapper.update();
}

void ofApp::draw(){
	mapper.draw();
}

void ofApp::messageReceived(ofMessage & message){
	if(message.message == "START GAME"){
		startTime = ofGetElapsedTimef();
		gameSource.gameState.setup();
		gameSource.activeState = &gameSource.gameState;
	}else if(message.message == "GAME OVER"){
		float endTime = ofGetElapsedTimef();
		float deltaTime = endTime - startTime;
		gameSource.endState.setTime(deltaTime);
		gameSource.activeState = &gameSource.endState;
	}
}
