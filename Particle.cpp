
#include "Particle.hpp"

void Particle::setup(int x, int y, ofColor _color){
    position.set(x, y);
    color= _color;
    
    velocity.set(ofRandom(-1,1), ofRandom(-1, 1));
    acceleration.set(0, ofRandom(0, 0.01));

    alpha = 255;
    
}

void Particle::update(){
    position += velocity;
    velocity += acceleration;
    
    
}

void Particle::draw(){
    ofSetColor(color.r, color.g, color.b, alpha);
    ofDrawCircle(position, 2);
}
