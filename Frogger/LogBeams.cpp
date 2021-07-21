#include "LogBeams.h"
#include "Definitions.h"



LogBeams::LogBeams(float posX, float posY)
{

	shape.setSize(sf::Vector2f(LOGBEAMS_SIZE_LARGE_WIDTH, LOGBEAMS_SIZE_LARGE_HEIGHT));
	shape.setFillColor(sf::Color(30, 10, 10));
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;

}

LogBeams2::LogBeams2(float posX, float posY)
{

	shape.setSize(sf::Vector2f(LOGBEAMS_SIZE_LARGE_WIDTH, LOGBEAMS_SIZE_LARGE_HEIGHT));
	shape.setFillColor(sf::Color(30, 10, 10));
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;

}

LogBeams3::LogBeams3(float posX, float posY)
{

	shape.setSize(sf::Vector2f(LOGBEAMS_SIZE_LARGE_WIDTH, LOGBEAMS_SIZE_LARGE_HEIGHT));
	shape.setFillColor(sf::Color(30, 10, 10));
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;

}

LogBeams4::LogBeams4(float posX, float posY)
{

	shape.setSize(sf::Vector2f(LOGBEAMS_SIZE_SMALL_WIDTH, LOGBEAMS_SIZE_SMALL_HEIGHT));
	shape.setFillColor(sf::Color(30, 10, 10));
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;

}

LogBeams5::LogBeams5(float posX, float posY)
{

	shape.setSize(sf::Vector2f(LOGBEAMS_SIZE_SMALL_WIDTH, LOGBEAMS_SIZE_SMALL_HEIGHT));
	shape.setFillColor(sf::Color(30, 10, 10));
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;

}

LogBeams6::LogBeams6(float posX, float posY)
{

	shape.setSize(sf::Vector2f(LOGBEAMS_SIZE_SMALL_WIDTH, LOGBEAMS_SIZE_SMALL_HEIGHT));
	shape.setFillColor(sf::Color(30, 10, 10));
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;

}

void LogBeams::Move(sf::Vector2u size)
{
	shape.move(LOGBEAMS_MOVEMENT_SPEED_FAST_X, 0.0);// car moves from left to right with speed set in Definition header file

	if (shape.getPosition().x > size.x)
	{
		shape.setPosition(sf::Vector2f(-shape.getSize().x, originalPosY));
	}
}

void LogBeams2::Move(sf::Vector2u size)
{
	shape.move(LOGBEAMS_MOVEMENT_SPEED_FAST_X, 0.0);// car moves from left to right with speed set in Definition header file

	if (shape.getPosition().x > size.x)
	{
		shape.setPosition(sf::Vector2f(-shape.getSize().x, originalPosY));
	}
}

void LogBeams3::Move(sf::Vector2u size)
{
	shape.move(LOGBEAMS_MOVEMENT_SPEED_FAST_X, 0.0);// car moves from left to right with speed set in Definition header file

	if (shape.getPosition().x > size.x)
	{
		shape.setPosition(sf::Vector2f(-shape.getSize().x, originalPosY));
	}
}
void LogBeams4::Move(sf::Vector2u size)
{
	shape.move(LOGBEAMS_MOVEMENT_SPEED_SLOW_X, 0.0);// car moves from left to right with speed set in Definition header file

	if (shape.getPosition().x > size.x)
	{
		shape.setPosition(sf::Vector2f(-shape.getSize().x, originalPosY));
	}
}

void LogBeams5::Move(sf::Vector2u size)
{
	shape.move(LOGBEAMS_MOVEMENT_SPEED_SLOW_X, 0.0);// car moves from left to right with speed set in Definition header file

	if (shape.getPosition().x > size.x)
	{
		shape.setPosition(sf::Vector2f(-shape.getSize().x, originalPosY));
	}
}

void LogBeams6::Move(sf::Vector2u size)
{
	shape.move(LOGBEAMS_MOVEMENT_SPEED_SLOW_X, 0.0);// car moves from left to right with speed set in Definition header file

	if (shape.getPosition().x > size.x)
	{
		shape.setPosition(sf::Vector2f(-shape.getSize().x, originalPosY));
	}
}