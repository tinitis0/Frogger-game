#include "Truck.h"
#include "Definitions.h"



Truck::Truck(float posX, float posY)
{	
	shape.setSize(sf::Vector2f(TRUCK_SIZE_WIDTH, TRUCK_SIZE_HEIGHT));
	shape.setFillColor(sf::Color::Magenta);
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}

Truck2::Truck2(float posX, float posY)
{
	shape.setSize(sf::Vector2f(TRUCK_SIZE_WIDTH, TRUCK_SIZE_HEIGHT));
	shape.setFillColor(sf::Color::Magenta);
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}

Truck3::Truck3(float posX, float posY)
{
	shape.setSize(sf::Vector2f(TRUCK_SIZE_WIDTH, TRUCK_SIZE_HEIGHT));
	shape.setFillColor(sf::Color::Magenta);
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}

Truck4::Truck4(float posX, float posY)
{
	shape.setSize(sf::Vector2f(TRUCK_SIZE_WIDTH, TRUCK_SIZE_HEIGHT));
	shape.setFillColor(sf::Color::Magenta);
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}



void Truck::Move(sf::Vector2u size)
{
	shape.move(TRUCK_MOVEMENT_SPEED_X, 0.0);// car moves from left to right with speed of 0.9 on x axis

	if (shape.getPosition().x > size.x)
	{
		shape.setPosition(sf::Vector2f(-shape.getSize().x, originalPosY));
	}
}

void Truck2::Move(sf::Vector2u size)
{
	shape.move(TRUCK_MOVEMENT_SPEED_X, 0.0);// car moves from left to right with speed of 0.9 on x axis

	if (shape.getPosition().x > size.x)
	{
		shape.setPosition(sf::Vector2f(-shape.getSize().x, originalPosY));
	}
}

void Truck3::Move(sf::Vector2u size)
{
	shape.move(-TRUCK_MOVEMENT_SPEED_X, 0.0);// car moves from left to right with speed of 0.9 on x axis

	if (shape.getPosition().x < 0 - shape.getSize().x)
	{
		shape.setPosition(sf::Vector2f(size.x, originalPosY));
	}
}

void Truck4::Move(sf::Vector2u size)
{
	shape.move(-TRUCK_MOVEMENT_SPEED_X, 0.0);// car moves from left to right with speed of 0.9 on x axis

	if (shape.getPosition().x < 0 - shape.getSize().x)
	{
		shape.setPosition(sf::Vector2f(size.x, originalPosY));
	}
}






