#include "Particle.h"


Particle::Particle(int startX, int startY) {
	radius = ofRandom(2, 20);
	position = ofPoint(startX,
		startY);


	speed = ofVec2f(ofRandom(-2, 2),
		ofRandom(-2, 2));

	innerColour = ofColor(31, 127, 255, 127);
	outerColour = ofColor(128, 255, 255, 15);
	lifetime = 0;
}

Particle::~Particle() {
}

void Particle::setColours(ofColor center, ofColor inner, ofColor outer) {
	centerColour = center;
	innerColour = inner;
	outerColour = outer;
}

void Particle::move() {
	position += speed;
	lifetime++;
}


void Particle::draw() const {
	ofSetColor(outerColour);
	ofDrawCircle(position.x, position.y, radius * 2.0);

	ofSetColor(innerColour);
	ofDrawCircle(position.x, position.y, radius);

	ofSetColor(centerColour);
	ofDrawCircle(position.x, position.y, radius * 0.25);
}

bool Particle::isDead() const {
	return lifetime > Max_Lifetime;
}