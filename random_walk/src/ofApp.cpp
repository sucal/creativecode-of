#include "ofApp.h"



ofApp::~ofApp(){
  std::cout << "deleting walker instance ..." << std::endl;
  delete pWalker;
}

//--------------------------------------------------------------
void ofApp::setup(){
  ofSetBackgroundAuto(false);
  ofBackground(0,0,0);
  ofEnableAlphaBlending();
  ofSetFrameRate(2500);
  pWalker = new Walker(ofGetWindowWidth()*0.5, ofGetWindowHeight()*0.5);
}

//--------------------------------------------------------------
void ofApp::update(){
  pWalker->step();
}

//--------------------------------------------------------------
void ofApp::draw(){
  pWalker->plot();
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
  std::cout << "Window Resized to " << w << ", " << h << std::endl;
  delete pWalker;
  pWalker = new Walker(w*0.5, h*0.5);
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
