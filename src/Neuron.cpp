//
//  Neuron.cpp
//  recursionMidterm
//
//  Created by Courtney Snavely on 3/12/16.
//
//

#include "Neuron.hpp"
//#include "ofMain.h"

void Neuron:: setup(float _xPos, float _yPos, float _length, float _width, float _splitpercentage,float _maxSplitAngle, float _maxSubdivisions, float _maxSegments, float _segmentsSinceStart, float _angle, float _curvature, ofColor _color){

    xPos=_xPos;
    yPos= _yPos;
    length= _length;
    width = _width;
    splitPercentage= _splitpercentage;
    maxSplitAngle= _maxSplitAngle;
    maxSubdivision= _maxSubdivisions;
    maxSegments= _maxSegments;
    segmentsSinceStart= _segmentsSinceStart;
    angle= _angle;
    curvature= _curvature;
    
    float r = ofRandomuf();
    if(r>splitPercentage && segmentsSinceStart!= maxSegments){
        split = true;
    }else{
        split = false;
    }
    color = ofColor(ofRandom(50), ofRandom(100, 255), ofRandom(100, 255));
    ofSetColor(color);
    ofSetLineWidth(int(width));

    ofDrawLine(xPos, yPos, xPos+length*cos(angle), yPos +length*sin(angle));
   
    xPos+= length*cos(angle);
    yPos+= length*sin(angle);
    width= ofRandom(0.4,0.8)*width;
    length= ofRandom(0.7,0.9)*length;
    
    angle+=curvature;
    curvature = ofRandom(0, 2*PI/360);
    segmentsSinceStart++;
    
    if(segmentsSinceStart <= maxSegments){
        if(!split){
            Neuron subBranch;
            subBranch.setup(xPos, yPos, length, width, splitPercentage, maxSplitAngle, maxSubdivision, maxSegments, segmentsSinceStart, angle, curvature, color);
        }else{
            Neuron subBranch1;
            float angle1= angle - ofRandom(0,maxSplitAngle);
            subBranch1.setup(xPos, yPos, length, width, splitPercentage, maxSplitAngle, maxSubdivision, maxSegments, segmentsSinceStart, angle1, curvature, color);
            float angle2= angle + ofRandom(0, maxSplitAngle);
            Neuron subBranch2;
            subBranch2.setup(xPos, yPos, length, width, splitPercentage, maxSplitAngle, maxSubdivision, maxSegments, segmentsSinceStart, angle2, curvature, color);
        }
        
    }
}

void Neuron:: update(float rotation){
   
}
