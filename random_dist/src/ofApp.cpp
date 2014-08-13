#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(0, 0, 0, 1);

  for(int i = 0; i < MAX_SIZE; i++) {
    randomCounts[i] = 0;
  }
}

//--------------------------------------------------------------
void ofApp::update(){
  int index = ofRandom(MAX_SIZE);
  randomCounts[index]++;
}

//--------------------------------------------------------------
void ofApp::draw(){

  int width = ofGetWindowWidth();
  int height = ofGetWindowHeight();

  int w = width/MAX_SIZE;

  for(int i = 0; i < MAX_SIZE; i++) {
    ofSetColor(144,144,144);
    ofFill();
    ofRect(i*w, height - randomCounts[i], w, randomCounts[i]);
    ofSetColor(44,44,44);
    ofNoFill();
    ofRect(i*w, height - randomCounts[i], w, randomCounts[i]);

  }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
