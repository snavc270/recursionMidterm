//
//  Neuron.hpp
//  recursionMidterm
//
//  Created by Courtney Snavely on 3/12/16.
//
//

#ifndef Neuron_hpp
#define Neuron_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Neuron_hpp */

class Neuron : public ofBaseApp{
public:
    void setup(float _xPos, float _yPos, float _length, float _width, float _splitpercentage,
               float _maxSplitAngle, float _maxSubdivisions, float _maxSegments, float _segmentsSinceStart, float _angle, float _curvature, ofColor _color);
    void update(float rotation); 
private:
    float xPos, yPos;
    float length, width;
    float splitPercentage;
    float maxSplitAngle;
    float maxSubdivision;
    float segmentsSinceStart;
    float angle;
    float maxSegments;
    float curvature;
    ofColor color; 
    float r; 
     
    
    bool split; 
};
