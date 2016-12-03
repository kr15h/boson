#include "ofApp.h"

void ofApp::setup(){
	ofSetCircleResolution(100);
	ofBackground(0);
	mapper.registerFboSource(game);
	mapper.setup();
}

void ofApp::update(){
	mapper.update();
}

void ofApp::draw(){
	mapper.draw();
}

void ofApp::messageReceived(ofMessage & message){
	cout << "Message received: " << message.message << endl;
}
