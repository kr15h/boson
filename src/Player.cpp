#include "Player.h"

Player::Player(){
	box = ofRectangle(0, 0, 80, 80);
}

void Player::update(){
	if(ofGetKeyPressed(OF_KEY_UP)){
		box.y--;
	}
	
	if(ofGetKeyPressed(OF_KEY_DOWN)){
		box.y++;
	}
	
	if(ofGetKeyPressed(OF_KEY_LEFT)){
		box.x--;
	}
	
	if(ofGetKeyPressed(OF_KEY_RIGHT)){
		box.x++;
	}
}

void Player::draw(){
	ofPushStyle();
	ofSetColor(ofColor::cyan);
	ofDrawCircle(
		box.x + box.width / 2,
		box.y + box.height / 2,
		box.width / 2);
	ofPopStyle();
}

bool Player::touches(Collectible * c){
	return box.intersects(c->box);
}
