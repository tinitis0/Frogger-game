#pragma once
#include <SFML/Graphics.hpp>
#include "MainObjects.h"

class Frog : public MainObjects
{

public:
	Frog(float posX, float posY);
	
	void Move(sf::Event event, sf::Vector2u size);
	
	void Restart(float posX, float posY);

	private:

		float originalPosX, originalPosY;


		
};

