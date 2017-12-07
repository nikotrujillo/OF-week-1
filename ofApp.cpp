#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
    int numParticle = 350;
    for (int i=0; i<numParticle; i++){
        Particle Firework;
        Fireworks.push_back(Firework);
    }
    
    FireworksRestart();
    
}
void ofApp::FireworksRestart(){
    ofPoint position;
    position.set(ofRandomWidth(), ofRandomHeight());
    ofColor FireworkColor;
    FireworkColor.setHsb(ofRandom(255), 255, 192);
    
    for (int i=0; i<Fireworks.size(); i++){
        Fireworks[i].setup(position.x, position.y, FireworkColor);
    }

    
}
//--------------------------------------------------------------
void ofApp::update(){
    for (int i=0; i<Fireworks.size(); i++){
        Fireworks[i].update();
    }
    if(Fireworks[0].alpha <=50){
        FireworksRestart();

    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 0, 0, 18);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
               for (int i=0; i<Fireworks.size(); i++){
        Fireworks[i].draw();
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
