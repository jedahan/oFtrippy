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
    c.r = c.r + ofRandom(-3, 3);
    c.g = c.g + ofRandom(-3, 3);
    c.b = c.b + ofRandom(-3, 3);
    if(c.r>255) {c.r = 255;};
    if(c.g>255) {c.g = 255;};
    if(c.b>255) {c.b = 255;};
    if(c.r<0) {c.r = 0;};
    if(c.g<0) {c.g = 0;};
    if(c.b<0) {c.b = 0;};
    cout << vy << endl;
    x += vx;
    y += vy;
}

void Tripper::draw(){
    ofSetColor(c);
    ofCircle(x,y,r);
}

Tripper::Tripper() {
    Tripper(0,0,0,0,0,ofColor(255,255,255));
}

Tripper::Tripper(int x, int y, int r, int vx, int vy, ofColor c) {
    this->x = x;
    this->y = y;
    this->r = r;
    this->vx = vx;
    this->vy = vy;
    this->c = c;
}