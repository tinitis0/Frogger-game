#pragma once
#include <SFML/Graphics.hpp>
#include "MainObjects.h"


class Car : public MainObjects
{
public:

	Car( float posX, float posY);
	void Move(sf::Vector2u size);

private:

	float originalPosX, originalPosY;
};


class Car2 : public MainObjects
{
public:

	Car2(float posX, float posY);
	void Move(sf::Vector2u size);

private:

	float originalPosX, originalPosY;
};

class Car3 : public MainObjects
{
public:

	Car3(float posX, float posY);
	void Move(sf::Vector2u size);

private:

	float originalPosX, originalPosY;
};

class Car4 : public MainObjects
{
public:

	Car4(float posX, float posY);
	void Move(sf::Vector2u size);

private:

	float originalPosX, originalPosY;
};

class Car5 : public MainObjects
{
public:

	Car5(float posX, float posY);
	void Move(sf::Vector2u size);

private:

	float originalPosX, originalPosY;
};

class Car6 : public MainObjects
{
public:

	Car6(float posX, float posY);
	void Move(sf::Vector2u size);

private:

	float originalPosX, originalPosY;
};

class Car7 : public MainObjects
{
public:

	Car7(float posX, float posY);
	void Move(sf::Vector2u size);

private:

	float originalPosX, originalPosY;
};

class Car8 : public MainObjects
{
public:

	Car8(float posX, float posY);
	void Move(sf::Vector2u size);

private:

	float originalPosX, originalPosY;
	float B = (0, 0);
};
