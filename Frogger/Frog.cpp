#include "Frog.h"
#include "Definitions.h"
#include "Stats.h"

Frog::Frog(float posX, float posY)
{
	shape.setSize(sf::Vector2f(40.f, 40.f));
	shape.setPosition(sf::Vector2f(posX, posY));
	shape.setFillColor(sf::Color::Green);

	originalPosX = posX;
	originalPosY = posY;

}


void Frog::Move(sf::Event event, sf::Vector2u size)
{
	if (sf::Keyboard::Key::Left == event.key.code)
	{
		if (shape.getPosition().x != 0)// prevents frog from going out of boundaries on x axis
		{
			shape.move(-FROG_MOVEMENT_JUMP, 0);
		}
		
	}
	else if (sf::Keyboard::Key::Right == event.key.code)
	{		
		shape.move(FROG_MOVEMENT_JUMP, 0);		
	}

	else if (sf::Keyboard::Key::Up == event.key.code)
	{
		if (shape.getPosition().y != 0)// prevents frog from going out of boundaries on x axis
		{
			shape.move(0, -FROG_MOVEMENT_JUMP);
		}
		
	}
	else if (sf::Keyboard::Key::Down == event.key.code)
	{
		shape.move(0, FROG_MOVEMENT_JUMP);			
	}
}

void Frog::Restart(float posX, float posY)
{
	shape.setPosition(sf::Vector2f(posX, posY));
}

