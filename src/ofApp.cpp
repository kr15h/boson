#include "ofApp.h"

void ofApp::setup(){
	ofBackground(0);
	
	mapper.setup();
}

void ofApp::update(){
	mapper.update();
}

void ofApp::draw(){
	mapper.draw();
}
