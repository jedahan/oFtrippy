//
//  Tripper.cpp
//  randomMovement
//
//  Created by Jonathan Dehan on 6/20/13.
//
//

#include "Tripper.h"

void Tripper::update() {
    r += ofRandom(7) - ofRandom(5);
    c.set(c.r+=ofRandom(-5,5),c.g+=ofRandom(-5,5),c.b+=ofRandom(-5,5));
  //  x += vx;
    x += ofRandom(-5,5);
//    y += vy;
    y += ofRandom(-5,5);
}

void Tripper::draw(){
    ofSetColor(c);
    ofCircle(x,y,r);
}

Tripper::Tripper() {
    Tripper(0,0,10,0,0,ofColor(255,255,255));
}

Tripper::Tripper(int x, int y, int r, int vx, int vy, ofColor c) {
    this->x = x;
    this->y = y;
    this->r = r;
    this->vx = vx;
    this->vy = vy;
    this->c = c;
}