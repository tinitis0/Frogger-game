#pragma once
#include <SFML/Graphics.hpp>
#include "MainObjects.h"

class Truck : public MainObjects
{
public:
	Truck(float posX, float posY);

	void Move(sf::Vector2u size);

private:

	float originalPosX, originalPosY;

};

class Truck2 : public MainObjects
{
public:
	Truck2(float posX, float posY);

	void Move(sf::Vector2u size);

private:

	float originalPosX, originalPosY;

};

class Truck3 : public MainObjects
{
public:
	Truck3(float posX, float posY);

	void Move(sf::Vector2u size);

private:

	float originalPosX, originalPosY;

};

class Truck4 : public MainObjects
{
public:
	Truck4(float posX, float posY);

	void Move(sf::Vector2u size);

private:

	float originalPosX, originalPosY;

};
