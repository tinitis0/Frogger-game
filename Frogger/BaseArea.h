#pragma once
#include <SFML/Graphics.hpp>
#include "MainObjects.h"

class BaseArea : public MainObjects
{
public:
	BaseArea(float posX, float posY);

private:

	float originalPosX, originalPosY;

};

class MiddleArea : public MainObjects
{
public:

	MiddleArea(float posX, float posY);


private:

	float originalPosX, originalPosY;

};

class MiddleArea2 : public MainObjects
{
public:

	MiddleArea2(float posX, float posY);


private:

	float originalPosX, originalPosY;

};
