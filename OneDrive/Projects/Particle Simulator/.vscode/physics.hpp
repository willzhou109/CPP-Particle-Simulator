#pragma once
#include <SFML/Graphics.hpp>
#include "particle.hpp"

void apply_force(Particle* p, const sf::Vector2f& force);

void verlet_update(Particle* p, float time_step);

void constrain_to_bounds(Particle* p, float width, float height, float radius);