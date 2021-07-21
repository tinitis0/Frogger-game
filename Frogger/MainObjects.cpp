#include "MainObjects.h"



MainObjects::MainObjects()
{

}

void MainObjects::Draw(sf::RenderWindow &window)
{
	window.draw(shape);
}


sf::RectangleShape MainObjects::GetShape()
{
	return shape;
}


