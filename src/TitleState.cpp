#include "TitleState.h"

void TitleState::setup(){
	box = ofRectangle(0, 0, 800, 800);
	
	headerFont.setGlobalDpi(72);
	footerFont.setGlobalDpi(72);
	
	headerFont.load("Montserrat/Montserrat-Bold.ttf", 120);
	footerFont.load("Montserrat/Montserrat-Bold.ttf", 40);
}

void TitleState::update(){
	if(ofGetKeyPressed(' ')){
		ofSendMessage(ofMessage("START GAME"));
	}
}

void TitleState::draw(){
	ofSetColor(ofColor::black);
	ofDrawRectangle(box);
	
	ofRectangle headerBox = headerFont.getStringBoundingBox("BOSON", 0, 0);
	ofRectangle footerBox1 = footerFont.getStringBoundingBox("HIT SPACE", 0, 0);
	ofRectangle footerBox2 = footerFont.getStringBoundingBox("TO START GAME", 0, 0);
	
	ofSetColor(ofColor::lightYellow);
	headerFont.drawString("BOSON",
		(box.width - headerBox.width) / 2.0f,
		headerBox.height + 100);
	
	footerFont.drawString("HIT SPACE",
		(box.width - footerBox1.width) / 2.0f,
		box.height - 100 - footerBox1.height - 20);
	
	footerFont.drawString("TO START GAME",
		(box.width - footerBox2.width) / 2.0f,
		box.height - 100);
	
	ofSetColor(ofColor::skyBlue);
	ofDrawCircle(box.width / 2.0f, box.height / 2.0f, 140);
}
