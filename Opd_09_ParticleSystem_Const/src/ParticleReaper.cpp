#include "ParticleReaper.h"

void ParticleReaper::cleanup(vector<Particle*>& particles) const {
	for (vector<Particle*>::iterator it = particles.begin(); it != particles.end();) {
		if ((*it)->isDead()) {
			delete *it;
			it = particles.erase(it);
		}
		else {
			++it;
		}
	}
}