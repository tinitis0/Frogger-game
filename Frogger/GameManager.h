#pragma once
#include <SFML/Graphics.hpp>
#include "Frog.h"
#include "Car.h"
#include "Truck.h"
#include "BaseArea.h"
#include "Water.h"
#include "Home.h"
#include "LilyPads.h"
#include "LogBeams.h"
#include "Stats.h"



class GameManager
{
public:

	GameManager();
	
	void MainLoop();

	

private:
	sf::RenderWindow *Window;// pointer constructor
	Frog *frog;
	Frog *reset;

	BaseArea *baseArea;
	MiddleArea *middleArea;
	MiddleArea2 *middleArea2;

	Stats *score;
	Stats *lives;
	Water *water;

	Home *home;
	Home2 *home2;
	Home3 *home3;
	Home4 *home4;

	LilyPads *lilyPads;
	LilyPads2 *lilyPads2;
	LilyPads3 *lilyPads3;
	LilyPads4 *lilyPads4;
	LilyPads5 *lilyPads5;

	LogBeams *logBeams;
	LogBeams2 *logBeams2;
	LogBeams3 *logBeams3;
	LogBeams4 *logBeams4;
	LogBeams5 *logBeams5;
	LogBeams6 *logBeams6;

	Car *car;
	Car2 *car2;
	Car3 *car3;
	Car4 *car4;
	Car5 *car5;
	Car6 *car6;
	Car7 *car7;
	Car8 *car8;

	Truck *truck;
	Truck2 *truck2;
	Truck3 *truck3;
	Truck4 *truck4;

	
};

