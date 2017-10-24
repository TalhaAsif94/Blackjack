#include <vector>
#include <SFML\Graphics.hpp>
#pragma once


namespace T
{
	class Game
	{
		struct Player_Data
		{
			std::vector <sf::Sprite> hands;
			std::vector <size_t> hand;
			size_t score;
			bool isStand;
		}player1, player2;
		sf::RenderWindow window;
		sf::Event event;
		sf::Texture texture[3];
		sf::Sprite background;
		sf::Font font;
		sf::Text text[5];
		std::vector <size_t> deck;
		static size_t length1, length2;
		void shuffle();
		void display();
		void deal();
		void calculateScore();
		void end();
		void hit();
	public:
		Game();
		virtual ~Game();
		void run();
	};
}