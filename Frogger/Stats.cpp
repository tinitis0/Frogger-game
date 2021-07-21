#include "Stats.h"
#include "Definitions.h"
#pragma warning(disable : 4996)

using namespace sf;
using namespace std;

Stats::Stats(float posX, float posY)
{
	sf::Font font;

	sf::Text score;
	sf::Text scoreNum;

	sf::Text lives;
	sf::Text livesNum;
	if (!font.loadFromFile("Reading.ttf"))
	{
		// error...
	}

	int iLives = 3;
	int iScore = 0;

	lives.setFont(font);
	lives.setColor(sf::Color::White);
	lives.setCharacterSize(20);
	lives.setString("Lives: ");
	lives.setPosition(20, 600);

	
	score.setFont(font);
	score.setCharacterSize(20);
	score.setColor(Color::White);
	score.setString("Score");
	score.setPosition(200, 600);
}


