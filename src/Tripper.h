#pragma once

#include "ofMain.h"

class Tripper {
public:
    int x;
    int y;
    int r;
    int vx;
    int vy;
    ofColor c;
    
    Tripper();
    Tripper(int x, int y, int r, int vx, int vy, ofColor c);
    void update();
    void draw();
};