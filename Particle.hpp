

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"



class Particle{
public:
    void setup(int x, int y, ofColor _color);
    void update();
    void draw();
    
    ofPoint position, velocity, acceleration;
    
    ofColor color;
    int alpha;
    
    
};


#endif /* Particle_hpp */
