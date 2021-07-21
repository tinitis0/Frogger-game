#pragma once
#include <SFML/Graphics.hpp>
#include "MainObjects.h"

class Stats : public MainObjects
{
public:
	Stats(float posX, float posY);

private:
	float originalPosX, originalPosY;
};



