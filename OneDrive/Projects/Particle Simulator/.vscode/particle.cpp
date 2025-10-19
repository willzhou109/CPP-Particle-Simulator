#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics.hpp>
#include "particle.hpp"


Particle::Particle(float x, float y)
    : position(x, y),
    position_prev(x, y),
    acceleration(0.f, 9.81f),
    is_pinned(false) {
}


