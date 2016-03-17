#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    
    numberNeurons=0;
 ofSetFrameRate(10);
    op= 100;
  
}
//--------------------------------------------------------------
void ofApp::update(){
    myNeuron.update(45);
    float r= ofRandomf();
    if(r>.4f){
        s= ofRandom(8,10);
    }else{
        s= ofRandom(10,13);
    }
    
//    if(ofGetElapsedTimeMillis()%2==0){
//        if(r>143 && g>211 && b>211){
//        r-=5;
//        g-=5;
//        b-=5;
//        }else{
//            r+=5;
//            g+=5;
//            b+=5;
//        }
//    }
    
    if(ofGetElapsedTimeMillis()%9==0){
        r=255;
        g=255;
        b=255;
    }else{
        r= 0;
        g= 0;
        b= 0;
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofColor colorOne(r+143, g+211, b+211);
    ofColor colorTwo(r, g, b);
    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_LINEAR);

    
    
    

    for(int i= 0; i<5; i++){
        myNeuron.setup(100+ i*200, //xPos
                   ofGetHeight(),
                   50, //length
                   7.5,  // width
                   0.4, //splitpercentage
                   PI/3, // maxsplitangle
                   4, //maxsubdivisions
                   s, //maxsegments
                   0, //float segmentssincestart
                   -PI/2, //float agle
                   0,
                   ofColor(ofRandom(50+i*20), ofRandom(100,255-50*i), ofRandom(100,255))); //float curve
        
    }
  //}
//}
    
    
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
