#include "Car.h"
#include "Definitions.h"

// // creating 4 cars with defined sizes and their x and y positions, these cars go right
Car::Car(float posX, float posY)
{
shape.setSize(sf::Vector2f(CAR_SIZE_WIDTH, CAR_SIZE_HEIGHT));
shape.setFillColor(sf::Color::Red);
shape.setPosition(sf::Vector2f(posX,  posY));

originalPosX = posX;
originalPosY = posY;
}

Car2::Car2(float posX, float posY)
{
	shape.setSize(sf::Vector2f(CAR_SIZE_WIDTH, CAR_SIZE_HEIGHT));
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}

Car3::Car3(float posX, float posY)
{
	shape.setSize(sf::Vector2f(CAR_SIZE_WIDTH, CAR_SIZE_HEIGHT));
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}

Car4::Car4(float posX, float posY)
{
	shape.setSize(sf::Vector2f(CAR_SIZE_WIDTH, CAR_SIZE_HEIGHT));
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}

// creating 4 cars with defined sizes and their x and y positions, these cars go left
Car5::Car5(float posX, float posY)
{
	shape.setSize(sf::Vector2f(CAR_SIZE_WIDTH, CAR_SIZE_HEIGHT));
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}

Car6::Car6(float posX, float posY)
{
	shape.setSize(sf::Vector2f(CAR_SIZE_WIDTH, CAR_SIZE_HEIGHT));
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}

Car7::Car7(float posX, float posY)
{
	shape.setSize(sf::Vector2f(CAR_SIZE_WIDTH, CAR_SIZE_HEIGHT));
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}

Car8::Car8(float posX, float posY)
{
	shape.setSize(sf::Vector2f(CAR_SIZE_WIDTH, CAR_SIZE_HEIGHT));
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;
}


//creates 2 cars per lane of road, which are going at same speed, same way and keeping the same distance at all times
void Car::Move(sf::Vector2u size)
{
	shape.move(CAR_MOVEMENT_SPEED_FAST_X, 0.0);// car moves from left to right with speed set in Definition header file

	if (shape.getPosition().x > size.x)
	{
		shape.setPosition(sf::Vector2f(-shape.getSize().x, originalPosY));
	}
}

void Car2::Move(sf::Vector2u size)
{
	shape.move(CAR_MOVEMENT_SPEED_FAST_X, 0.0);// car moves from left to right with speed set in Definition header file

	if (shape.getPosition().x > size.x)
	{
		shape.setPosition(sf::Vector2f(-shape.getSize().x, originalPosY));
	}
}

void Car3::Move(sf::Vector2u size)
{
	shape.move(CAR_MOVEMENT_SPEED_SLOW_X, 0.0);// car moves from left to right with speed set in Definition header file

	if (shape.getPosition().x > size.x)
	{
		shape.setPosition(sf::Vector2f(-shape.getSize().x, originalPosY));
	}
}

void Car4::Move(sf::Vector2u size)
{
	shape.move(CAR_MOVEMENT_SPEED_SLOW_X, 0.0);// car moves from left to right with speed set in Definition header file

	if (shape.getPosition().x > size.x)
	{
		shape.setPosition(sf::Vector2f(-shape.getSize().x, originalPosY));
	}
}

void Car5::Move(sf::Vector2u size)
{
	shape.move(-CAR_MOVEMENT_SPEED_SLOW_X, 0.0);// car moves from right to left with speed set in Definition header file

	if (shape.getPosition().x < 0 - shape.getSize().x)
	{
		shape.setPosition(sf::Vector2f(size.x, originalPosY));
	}
}

void Car6::Move(sf::Vector2u size)
{
	shape.move(-CAR_MOVEMENT_SPEED_SLOW_X, 0.0);// car moves from right to left with speed set in Definition header file

	if (shape.getPosition().x < 0 - shape.getSize().x)
	{
		shape.setPosition(sf::Vector2f(size.x, originalPosY));
	}
}

void Car7::Move(sf::Vector2u size)
{
	shape.move(-CAR_MOVEMENT_SPEED_FAST_X, 0.0);// car moves from right to left with speed set in Definition header file

	if (shape.getPosition().x < 0 - shape.getSize().x)
	{
		shape.setPosition(sf::Vector2f(size.x, originalPosY));
	}
}

void Car8::Move(sf::Vector2u size)
{
	shape.move(-CAR_MOVEMENT_SPEED_FAST_X, 0.0);// car moves from right to left with speed set in Definition header file

	if (shape.getPosition().x < 0 -  shape.getSize().x)
	{
		shape.setPosition(sf::Vector2f(size.x, originalPosY));
		
	}
}








