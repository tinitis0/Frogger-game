#include "GameManager.h"
#include "Definitions.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

using namespace sf;
using namespace std;

GameManager::GameManager()
{
	// creates window with the constructor
	Window = new sf::RenderWindow (sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);




	//Frog shape
	frog = new Frog(360,600);
	
	//score
	score = new Stats(200, 600);
	lives = new Stats(20, 600);
	//safe area
	baseArea = new BaseArea(0,600);
	middleArea = new MiddleArea(0, 200);
	middleArea2 = new MiddleArea2(0, 400);
	//water
	water = new Water(Window->getSize());
	//home/finish area
	home = new Home(120, HOME_POSITION_Y);
	home2 = new Home2(280, HOME_POSITION_Y);
	home3 = new Home3(440, HOME_POSITION_Y);
	home4 = new Home4(600, HOME_POSITION_Y);
	//lilypads
	lilyPads = new LilyPads(40, LILYPADS_POSITION_Y);
	lilyPads2 = new LilyPads2(200, LILYPADS_POSITION_Y);
	lilyPads3 = new LilyPads3(360, LILYPADS_POSITION_Y);
	lilyPads4 = new LilyPads4(520, LILYPADS_POSITION_Y);
	lilyPads5 = new LilyPads5(680, LILYPADS_POSITION_Y);

	//LogBeams
	logBeams = new LogBeams(0, 160);
	logBeams2 = new LogBeams2(320, 160);
	logBeams3 = new LogBeams3(640, 160);
	logBeams4 = new LogBeams4(0, 80);
	logBeams5 = new LogBeams5(320, 80);
	logBeams6 = new LogBeams6(640, 80);


	//Car going right
	car = new Car(500, 560);
	car2 = new Car2(200, 560);
	car3 = new Car3(600, 520);
	car4 = new Car4(300, 520);
	//car going left
	car5 = new Car5(0, 480);
	car6 = new Car6(400, 480);
	car7 = new Car7(100, 440);
	car8 = new Car8(500, 440);

	//Truck
	truck = new Truck(0, 320);
	truck2 = new Truck2(300, 320);
	//NotWorking
	truck3 = new Truck3(0, 240);
	truck4 = new Truck4(400, 240);
}

	//Main loop!!! runs the prorgam until user closes it
void GameManager::MainLoop()
{
	

	while (Window->isOpen())
	{


		//checks for all user events
		sf::Event event;
		sf::Vector2u size;
		while (Window->pollEvent(event))
		{
			// Close application event
			switch (event.type)
			{
			case sf::Event::Closed:
				Window->close();

				break;

			case sf::Event::KeyReleased:

				frog->Move(event, size);

				break;
			}
		}
		
		
		//Update the game


		//movement for the Cars, Trucks and the log beams.
		car->Move(Window->getSize());
		car2->Move(Window->getSize());
		car3->Move(Window->getSize());
		car4->Move(Window->getSize());
		car5->Move(Window->getSize());
		car6->Move(Window->getSize());
		car7->Move(Window->getSize());
		car8->Move(Window->getSize());

		truck->Move(Window->getSize());
		truck2->Move(Window->getSize());
		truck3->Move(Window->getSize());
		truck4->Move(Window->getSize());

		logBeams->Move(Window->getSize());
		logBeams2->Move(Window->getSize());
		logBeams3->Move(Window->getSize());
		logBeams4->Move(Window->getSize());
		logBeams5->Move(Window->getSize());
		logBeams6->Move(Window->getSize());


		
		//interection boundaries
		if (frog->GetShape().getGlobalBounds().intersects(car->GetShape().getGlobalBounds()))
		{
			
		}
		if (frog->GetShape().getGlobalBounds().intersects(truck->GetShape().getGlobalBounds()))
		{ 
			
		}
		if (frog->GetShape().getGlobalBounds().intersects(truck2->GetShape().getGlobalBounds()))
		{
			cout << "Haaa" << endl; 
			GameManager Restart();
		}
		if (frog->GetShape().getGlobalBounds().intersects(truck3->GetShape().getGlobalBounds()))
		{
			cout << "Lul" << endl;
		}
		if (frog->GetShape().getGlobalBounds().intersects(truck4->GetShape().getGlobalBounds()))
		{
			cout << "Lul" << endl;
		}

		// clears the window and sets it to black when its opened
		Window->clear(sf::Color::Black);

		//drawing with pointers
	

		//draws the car
		car->Draw(*Window);
		car2->Draw(*Window);
		car3->Draw(*Window);
		car4->Draw(*Window);
		car5->Draw(*Window);
		car6->Draw(*Window);
		car7->Draw(*Window);
		car8->Draw(*Window);

		// draws the trucks 
		truck->Draw(*Window);
		truck2->Draw(*Window);
		truck3->Draw(*Window);
		truck4->Draw(*Window);
		//draws the safe areas
		baseArea->Draw(*Window);
		middleArea->Draw(*Window);
		middleArea2->Draw(*Window);
		//draws the water
		water->Draw(*Window);
		//draws the home base where player needs to reach
		home->Draw(*Window);
		home2->Draw(*Window);
		home3->Draw(*Window);
		home4->Draw(*Window);
		// draws lilypads
		lilyPads->Draw(*Window);
		lilyPads2->Draw(*Window);
		lilyPads3->Draw(*Window);
		lilyPads4->Draw(*Window);
		lilyPads5->Draw(*Window);
		//draws log beams
		logBeams->Draw(*Window);
		logBeams2->Draw(*Window);
		logBeams3->Draw(*Window);
		logBeams4->Draw(*Window);
		logBeams5->Draw(*Window);
		logBeams6->Draw(*Window);

		//Draws the frog	   
		frog->Draw(*Window);	


		score->Draw(*Window);
		lives->Draw(*Window);

		Window->display();





	}

	void Restart(sf::Vector2f set);
	{
		Frog Restart();
	}
}
