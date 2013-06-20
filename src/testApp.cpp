#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    x = 0;
    y = 0;
    r = 10;
    ofHideCursor();
    ofSetBackgroundAuto(false);
    ofSetFullscreen(true);
}

//--------------------------------------------------------------
void testApp::update(){
    r += ofRandom(7);
    r -= ofRandom(5);
    color = ofColor(ofRandom( 128, 255 ), ofRandom( 128, 255 ), ofRandom( 128, 255 ));
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(color);
    ofCircle(x, y, r);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    testApp::x = x;
    testApp::y = y;
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}