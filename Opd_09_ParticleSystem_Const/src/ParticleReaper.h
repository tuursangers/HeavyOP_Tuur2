#pragma once


#include "Particle.h"

class ParticleReaper {
public:
	void cleanup(vector<Particle*>& particles) const; //geen veranderbare parameters
};