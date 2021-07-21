#include "LilyPads.h"
#include "Definitions.h"

LilyPads::LilyPads(float posX, float posY)
{
	shape.setSize(sf::Vector2f(LILYPADS_SIZE_WIDTH, LILYPADS_SIZE_HEIGHT));
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;

	shape.setFillColor(sf::Color LILYPADS_COLOR);
}

LilyPads2::LilyPads2(float posX, float posY)
{
	shape.setSize(sf::Vector2f(LILYPADS_SIZE_WIDTH, LILYPADS_SIZE_HEIGHT));
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;

	shape.setFillColor(sf::Color LILYPADS_COLOR);
}

LilyPads3::LilyPads3(float posX, float posY)
{
	shape.setSize(sf::Vector2f(LILYPADS_SIZE_WIDTH, LILYPADS_SIZE_HEIGHT));
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;

	shape.setFillColor(sf::Color LILYPADS_COLOR);
}

LilyPads4::LilyPads4(float posX, float posY)
{
	shape.setSize(sf::Vector2f(LILYPADS_SIZE_WIDTH, LILYPADS_SIZE_HEIGHT));
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;

	shape.setFillColor(sf::Color LILYPADS_COLOR);
}

LilyPads5::LilyPads5(float posX, float posY)
{
	shape.setSize(sf::Vector2f(80.f, 40.0f));
	shape.setPosition(sf::Vector2f(posX, posY));

	originalPosX = posX;
	originalPosY = posY;

	shape.setFillColor(sf::Color LILYPADS_COLOR);
}