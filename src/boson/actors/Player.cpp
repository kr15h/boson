#include "Player.h"

namespace boson{
namespace actors{

void Player::setup(){
	type = ActorType::PLAYER;
	boundingBox = ofRectangle(75, 100, 80, 80);
}

void Player::update(){
	if(ofGetKeyPressed(OF_KEY_UP)){
		boundingBox.y--;
	}
	
	if(ofGetKeyPressed(OF_KEY_DOWN)){
		boundingBox.y++;
	}
	
	if(ofGetKeyPressed(OF_KEY_LEFT)){
		boundingBox.x--;
	}
	
	if(ofGetKeyPressed(OF_KEY_RIGHT)){
		boundingBox.x++;
	}
}

void Player::draw(){
	ofPushStyle();
	ofSetColor(ofColor::cyan);
	ofDrawRectangle(boundingBox);
	ofPopStyle();
}

} // namespace actors
} // namespace boson
