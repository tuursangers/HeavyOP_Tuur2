#pragma once

#include "ofMain.h"

#define MAX_LIFETIME 150
//constant int MAX_LIFETIME = 150;

class Particle {
public:

	Particle(int startX, int startY);

	virtual void update();
	virtual void positionColor();
	virtual void draw();

	void fade();
	bool checkDead();
	

protected:
	ofPoint position;
	float radius;
	float random;
	ofVec2f speed;
	float lifetime;
	bool dead;

	float r_center;
	float r_inner;
	float r_outer;
	float resizer;

	ofColor centerColor;
	ofColor innerColor;
	ofColor outerColor;

};
