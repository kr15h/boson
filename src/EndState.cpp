#include "EndState.h"

void EndState::setup(){
	box = ofRectangle(0, 0, 800, 800);
	
	fontSm.setGlobalDpi(72);
	fontMd.setGlobalDpi(72);
	fontLg.setGlobalDpi(72);
	
	fontSm.load("Montserrat/Montserrat-Regular.ttf", 20);
	fontMd.load("Montserrat/Montserrat-Bold.ttf", 40);
	fontLg.load("Montserrat/Montserrat-Bold.ttf", 100);
}

void EndState::update(){
	if(ofGetKeyPressed(' ')){
		ofSendMessage(ofMessage("START GAME"));
	}
}

void EndState::draw(){
	ofSetColor(ofColor::black);
	ofDrawRectangle(box);
	
	ofRectangle headerBox = fontMd.getStringBoundingBox("GAME OVER", 0, 0);
	ofRectangle midBox1 = fontSm.getStringBoundingBox("YOUR TIME", 0, 0);
	ofRectangle timeBox = fontLg.getStringBoundingBox(ofToString(102), 0, 0);
	ofRectangle midBox2 = fontSm.getStringBoundingBox("SECONDS", 0, 0);
	ofRectangle footerBox1 = fontMd.getStringBoundingBox("HIT SPACE", 0, 0);
	ofRectangle footerBox2 = fontMd.getStringBoundingBox("TO PLAY AGAIN", 0, 0);
	
	ofSetColor(ofColor::lightYellow);
	fontMd.drawString("GAME OVER",
		(box.width - headerBox.width) / 2.0f,
		headerBox.height + 100);
	
	fontSm.drawString("YOUR TIME",
		(box.width - midBox1.width) / 2.0f,
		box.height / 2.0f - 50);
	
	fontLg.drawString(ofToString(102),
		(box.width - timeBox.width) / 2.0f,
		(box.height - timeBox.height) / 2.0f + timeBox.height);
	
	fontSm.drawString("SECONDS",
		(box.width - midBox2.width) / 2.0f,
		box.height / 2.0f + 70);
	
	fontMd.drawString("HIT SPACE",
		(box.width - footerBox1.width) / 2.0f,
		box.height - 100 - footerBox1.height - 20);
	
	fontMd.drawString("TO PLAY AGAIN",
		(box.width - footerBox2.width) / 2.0f,
		box.height - 100);
	
	ofSetColor(ofColor::skyBlue);
	ofDrawCircle(box.width / 4.0f, box.height / 2.0f, 50);
	ofDrawCircle((box.width / 4.0f) * 3.0f, box.height / 2.0f, 50);
}
