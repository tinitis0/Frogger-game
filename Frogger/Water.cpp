#include "Water.h"
#include "Definitions.h"


Water::Water(sf::Vector2u safe)
{
	shape.setSize(sf::Vector2f(800.f, 200.0f));
	shape.setPosition(sf::Vector2f(shape.getPosition().x, shape.getPosition().y));
	shape.setFillColor(sf::Color::Blue);
}

