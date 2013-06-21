#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(60);
    lastX = 0;
    lastY = 0;
    index = 0;
    ofHideCursor();
    ofSetFullscreen(true);
    ofSetBackgroundAuto(false);    
    ofSetVerticalSync(true);
}

//--------------------------------------------------------------
void testApp::update(){

    for(Tripper &tripper : trippers) {
        tripper.update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    for(Tripper &tripper : trippers) {
        tripper.draw();
    }

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    Tripper t = Tripper(x,y,10,x-lastX,y-lastY,ofColor(255,255,255));
    trippers.push_back(t);
    lastX=x;
    lastY=y;
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