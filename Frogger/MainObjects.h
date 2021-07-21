#pragma once
#include <SFML/Graphics.hpp>

class MainObjects
{

public:
	MainObjects();

		void Draw(sf::RenderWindow &window);

		sf::RectangleShape GetShape();

protected: // only accessable in this class and inherited clases

	sf::RectangleShape shape;

	
};

