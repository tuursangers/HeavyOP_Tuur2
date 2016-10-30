#pragma once


#include "ofMain.h"

//#define MAX_LIFETIME 150
const int Max_Lifetime = 150;

class Particle {
public:
	Particle(int startX, int startY);
	virtual ~Particle();

	virtual void move() ;

	void draw()const; //maakt altijd dezelfde figuren

	void setColours(ofColor center, ofColor inner, ofColor outer)  ;

	bool isDead() const; //kent geen parameters

protected:
	ofPoint position;
	float radius;
	ofVec2f speed;
	long lifetime;

	ofColor centerColour = ofColor::white;
	ofColor innerColour;
	ofColor outerColour;

};