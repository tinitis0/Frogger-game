#include "BaseArea.h"
#include "Definitions.h"


BaseArea::BaseArea(float posX, float posY) // creates a safe area at the bootom of the screen where the player starts the game
{
	shape.setSize(sf::Vector2f(800.f, 40.0f));
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;

	shape.setFillColor(sf::Color(50, 115, 65));
}

MiddleArea::MiddleArea(float posX, float posY) // creates safe area in middle of the screen between the road and water
{
	shape.setSize(sf::Vector2f(800.f, 40.0f)); // size of the safe area
	shape.setPosition(sf::Vector2f(posX, posY)); // position of the safe area

	originalPosX = posX; 
	originalPosY = posY;

	shape.setFillColor(sf::Color(50, 115, 65)); // color for the safe area
}

MiddleArea2::MiddleArea2(float posX, float posY)// creates safe area in middle of the screen between the roads
{
	shape.setSize(sf::Vector2f(800.f, 40.0f));
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;

	shape.setFillColor(sf::Color(50, 115, 65));
}

