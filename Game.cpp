#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.h"


///Static Members
size_t T::Game::length1 = 140;
size_t T::Game::length2 = 140;



///Private Functions
//Shuffles The Playing Deck
void T::Game::shuffle()
{
	srand(static_cast <size_t> (time(0)));
	size_t temp = 0, index1 = 0, index2 = 0;
	for (size_t i = 0; i < 104; i++)
	{
		do
		{
			index1 = rand() % 52;
			index2 = rand() % 52;
		} while (index1 == index2);
		temp = deck.at(index1);
		deck.at(index1) = deck.at(index2);
		deck.at(index2) = temp;
	}
}


//Displays The Game
void T::Game::display()
{
	window.clear();
	window.draw(background);
	window.draw(text[0]);
	for (size_t i = 0; i < player2.hands.size(); i++)
		window.draw(player2.hands.at(i));
	window.draw(text[1]);
	for (size_t i = 0; i < player1.hands.size(); i++)
		window.draw(player1.hands.at(i));
	window.draw(text[2]);
	window.draw(text[3]);
	window.draw(text[4]);
	window.display();
}


//Deals The First Hand
void T::Game::deal()
{
	sf::IntRect Rect;
	Rect.height = 190;
	Rect.width = 140;


	//Player 1
	player1.hand.push_back(deck.at(0));
	player1.hand.push_back(deck.at(2));
	for (size_t i = 0; i < 2; i++)
	{
		player1.hands.push_back(sf::Sprite());
		player1.hands.at(i).setTexture(texture[1]);
		switch (player1.hand.at(i))
		{
		//Ace Of Clubs
		case 1:
			Rect.top = 570;
			Rect.left = 560;
			break;
		//Two Of Clubs
		case 2:
			Rect.top = 1140;
			Rect.left = 280;
			break;
		//Three Of Clubs
		case 3:
			Rect.top = 190;
			Rect.left = 700;
			break;
		//Four Of Clubs
		case 4:
			Rect.top = 0;
			Rect.left = 700;
			break;
		//Five Of Clubs
		case 5:
			Rect.top = 1710;
			Rect.left = 560;
			break;
		//Six Of Clubs
		case 6:
			Rect.top = 1520;
			Rect.left = 560;
			break;
		//Seven Of Clubs
		case 7:
			Rect.top = 1330;
			Rect.left = 560;
			break;
		//Eight Of Clubs
		case 8:
			Rect.top = 1140;
			Rect.left = 560;
			break;
		//Nine Of Clubs
		case 9:
			Rect.top = 950;
			Rect.left = 560;
			break;
		//Ten Of Clubs
		case 10:
			Rect.top = 760;
			Rect.left = 560;
			break;
		//Jack Of Clubs
		case 11:
			Rect.top = 380;
			Rect.left = 560;
			break;
		//Queen Of Clubs
		case 12:
			Rect.top = 0;
			Rect.left = 560;
			break;
		//King Of Clubs
		case 13:
			Rect.top = 190;
			Rect.left = 560;
			break;


		//Ace Of Diamonds
		case 14:
			Rect.top = 0;
			Rect.left = 420;
			break;
		//Two Of Diamonds
		case 15:
			Rect.top = 1710;
			Rect.left = 420;
			break;
		//Three Of Diamonds
		case 16:
			Rect.top = 1520;
			Rect.left = 420;
			break;
		//Four Of Diamonds
		case 17:
			Rect.top = 1330;
			Rect.left = 420;
			break;
		//Five Of Diamonds
		case 18:
			Rect.top = 1140;
			Rect.left = 420;
			break;
		//Six Of Diamonds
		case 19:
			Rect.top = 950;
			Rect.left = 420;
			break;
		//Seven Of Diamonds
		case 20:
			Rect.top = 760;
			Rect.left = 420;
			break;
		//Eight Of Diamonds
		case 21:
			Rect.top = 570;
			Rect.left = 420;
			break;
		//Nine Of Diamonds
		case 22:
			Rect.top = 380;
			Rect.left = 420;
			break;
		//Ten Of Diamonds
		case 23:
			Rect.top = 190;
			Rect.left = 420;
			break;
		//Jack Of Diamonds
		case 24:
			Rect.top = 1710;
			Rect.left = 280;
			break;
		//Queen Of Diamonds
		case 25:
			Rect.top = 1330;
			Rect.left = 280;
			break;
		//King Of Diamonds
		case 26:
			Rect.top = 1520;
			Rect.left = 280;
			break;


		//Ace Of Spades
		case 27:
			Rect.top = 570;
			Rect.left = 0;
			break;
		//Two Of Spades
		case 28:
			Rect.top = 380;
			Rect.left = 140;
			break;
		//Three Of Spades
		case 29:
			Rect.top = 190;
			Rect.left = 140;
			break;
		//Four Of Spades
		case 30:
			Rect.top = 0;
			Rect.left = 140;
			break;
		//Five Of Spades
		case 31:
			Rect.top = 1710;
			Rect.left = 0;
			break;
		//Six Of Spades
		case 32:
			Rect.top = 1520;
			Rect.left = 0;
			break;
		//Seven Of Spades
		case 33:
			Rect.top = 1330;
			Rect.left = 0;
			break;
		//Eight Of Spades
		case 34:
			Rect.top = 1140;
			Rect.left = 0;
			break;
		//Nine Of Spades
		case 35:
			Rect.top = 950;
			Rect.left = 0;
			break;
		//Ten Of Spades
		case 36:
			Rect.top = 760;
			Rect.left = 0;
			break;
		//Jack Of Spades
		case 37:
			Rect.top = 380;
			Rect.left = 0;
			break;
		//Queen Of Spades
		case 38:
			Rect.top = 0;
			Rect.left = 0;
			break;
		//King Of Spades
		case 39:
			Rect.top = 190;
			Rect.left = 0;
			break;


		//Ace Of Hearts
		case 40:
			Rect.top = 1330;
			Rect.left = 140;
			break;
		//Two Of Hearts
		case 41:
			Rect.top = 380;
			Rect.left = 700;
			break;
		//Three Of Hearts
		case 42:
			Rect.top = 950;
			Rect.left = 280;
			break;
		//Four Of Hearts
		case 43:
			Rect.top = 760;
			Rect.left = 280;
			break;
		//Five Of Hearts
		case 44:
			Rect.top = 570;
			Rect.left = 280;
			break;
		//Six Of Hearts
		case 45:
			Rect.top = 380;
			Rect.left = 280;
			break;
		//Seven Of Hearts
		case 46:
			Rect.top = 190;
			Rect.left = 280;
			break;
		//Eight Of Hearts
		case 47:
			Rect.top = 0;
			Rect.left = 280;
			break;
		//Nine Of Hearts
		case 48:
			Rect.top = 1710;
			Rect.left = 140;
			break;
		//Ten Of Hearts
		case 49:
			Rect.top = 1520;
			Rect.left = 140;
			break;
		//Jack Of Hearts
		case 50:
			Rect.top = 1140;
			Rect.left = 140;
			break;
		//Queen Of Hearts
		case 51:
			Rect.top = 760;
			Rect.left = 140;
			break;
		//King Of Hearts
		default:
			Rect.top = 950;
			Rect.left = 140;
			break;
		}
		player1.hands.at(i).setTextureRect(Rect);
		player1.hands.at(i).setScale(static_cast <float> (0.4), static_cast <float> (0.4));
	}
	player1.hands.at(0).setPosition(static_cast <float> (20), static_cast <float> (200));
	player1.hands.at(1).setPosition(static_cast <float> (80), static_cast <float> (200));


	//Computer
	player2.hand.push_back(deck.at(1));
	player2.hand.push_back(deck.at(3));
	player2.hands.push_back(sf::Sprite());
	player2.hands.push_back(sf::Sprite());
	player2.hands.at(0).setTexture(texture[2]);
	player2.hands.at(1).setTexture(texture[2]);
	Rect.top = 0;
	Rect.left = 280;
	player2.hands.at(0).setTextureRect(Rect);
	player2.hands.at(1).setTextureRect(Rect);
	player2.hands.at(0).setScale(static_cast <float> (0.4), static_cast <float> (0.4));
	player2.hands.at(1).setScale(static_cast <float> (0.4), static_cast <float> (0.4));
	player2.hands.at(0).setPosition(static_cast <float> (20), static_cast <float> (40));
	player2.hands.at(1).setPosition(static_cast <float> (80), static_cast <float> (40));


	deck.erase(deck.begin(), deck.begin() + 4);
}


//Calculates The Score
void T::Game::calculateScore()
{
	size_t num = 0, count = 0;
	std::string str;


	//Player 1
	player1.score = 0;
	for (size_t i = 0; i < player1.hand.size(); i++)
	{
		num = player1.hand.at(i);
		while (num > 13)
			num -= 13;
		player1.score += num;
	}
	if (player1.score == 21)
		player1.isStand = true;
	if (player1.score == 0 || player1.score == 1)
	{
		std::cout << "ERROR! Invalid Score" << std::endl;
		exit(EXIT_FAILURE);
	}
	else
	{
		str.assign("Your Score: ");
		num = player1.score;
		while (num > 9)
		{
			num -= 10;
			count++;
		}
		if (count == 0)
			str.push_back(static_cast <char> (static_cast <size_t> ('0') + player1.score));
		else
		{
			str.push_back(static_cast <char> (static_cast <size_t> ('0') + count));
			str.push_back(static_cast <char> (static_cast <size_t> ('0') + num));
		}
	}
	text[2].setString(str);



	//Player 2
	player2.score = 0;
	for (size_t i = 0; i < player2.hand.size(); i++)
	{
		num = player2.hand.at(i);
		while (num > 13)
			num -= 13;
		player2.score += num;
	}
	if (player2.score == 21)
		player2.isStand = true;
	if (player2.score == 0 || player2.score == 1)
	{
		std::cout << "ERROR! Invalid Score" << std::endl;
		exit(EXIT_FAILURE);
	}


	str.clear();
}


//Detects The End Of The Game
void T::Game::end()
{
	bool isBust = false;


	//Checks For Condition Of The Computer
	if (player2.score > 21)
		isBust = true;


	//Checks For Condition Of The Player
	if (player1.score > 21)
	{
		isBust ? text[2].setString("Its A Tie! You & The Computer Got Busted") : text[2].setString("You Lost! You Got Busted");
		text[2].setPosition(static_cast <float> (0), static_cast <float> (130));
	}
	else if (player1.score == 21 && (player2.isStand || isBust))
	{
		player2.score == 21 ? text[2].setString("Its A Tie! You & The Computer Got Blackjack") : text[2].setString("You Won! You Got Blackjack");
		text[2].setPosition(static_cast <float> (0), static_cast <float> (130));
	}
	else
	{
		if (isBust)
		{
			text[2].setString("You Won! The Computer Got Busted");
			text[2].setPosition(static_cast <float> (0), static_cast <float> (130));
		}
		else if (player2.score == 21 && (player1.isStand || player1.score >= 21))
		{
			text[2].setString("You Lost! The Computer Got Blackjack");
			text[2].setPosition(static_cast <float> (0), static_cast <float> (130));
		}
		else if(player1.isStand && player2.isStand)
		{
			if (player1.score > player2.score)
			{
				text[2].setString("You Won! The Computer Scored Lower");
				text[2].setPosition(static_cast <float> (0), static_cast <float> (130));
			}
			else if (player1.score < player2.score)
			{
				text[2].setString("You Lost! The Computer Scored Higher");
				text[2].setPosition(static_cast <float> (0), static_cast <float> (130));
			}
			else
			{
				text[2].setString("Its A Tie! You & The Computer Scored Equal");
				text[2].setPosition(static_cast <float> (0), static_cast <float> (130));
			}
		}
	}
}


//Deals One More Card To Both The Players
void T::Game::hit()
{
	sf::IntRect Rect;
	Rect.height = 190;
	Rect.width = 140;


	//Player 1
	if (!player1.isStand)
	{
		player1.hand.push_back(deck.at(0));
		deck.erase(deck.begin(), deck.begin() + 1);
		player1.hands.push_back(sf::Sprite());
		player1.hands.at(player1.hands.size() - 1).setTexture(texture[1]);
		switch (player1.hand.at(player1.hand.size() - 1))
		{
			//Ace Of Clubs
		case 1:
			Rect.top = 570;
			Rect.left = 560;
			break;
			//Two Of Clubs
		case 2:
			Rect.top = 1140;
			Rect.left = 280;
			break;
			//Three Of Clubs
		case 3:
			Rect.top = 190;
			Rect.left = 700;
			break;
			//Four Of Clubs
		case 4:
			Rect.top = 0;
			Rect.left = 700;
			break;
			//Five Of Clubs
		case 5:
			Rect.top = 1710;
			Rect.left = 560;
			break;
			//Six Of Clubs
		case 6:
			Rect.top = 1520;
			Rect.left = 560;
			break;
			//Seven Of Clubs
		case 7:
			Rect.top = 1330;
			Rect.left = 560;
			break;
			//Eight Of Clubs
		case 8:
			Rect.top = 1140;
			Rect.left = 560;
			break;
			//Nine Of Clubs
		case 9:
			Rect.top = 950;
			Rect.left = 560;
			break;
			//Ten Of Clubs
		case 10:
			Rect.top = 760;
			Rect.left = 560;
			break;
			//Jack Of Clubs
		case 11:
			Rect.top = 380;
			Rect.left = 560;
			break;
			//Queen Of Clubs
		case 12:
			Rect.top = 0;
			Rect.left = 560;
			break;
			//King Of Clubs
		case 13:
			Rect.top = 190;
			Rect.left = 560;
			break;


			//Ace Of Diamonds
		case 14:
			Rect.top = 0;
			Rect.left = 420;
			break;
			//Two Of Diamonds
		case 15:
			Rect.top = 1710;
			Rect.left = 420;
			break;
			//Three Of Diamonds
		case 16:
			Rect.top = 1520;
			Rect.left = 420;
			break;
			//Four Of Diamonds
		case 17:
			Rect.top = 1330;
			Rect.left = 420;
			break;
			//Five Of Diamonds
		case 18:
			Rect.top = 1140;
			Rect.left = 420;
			break;
			//Six Of Diamonds
		case 19:
			Rect.top = 950;
			Rect.left = 420;
			break;
			//Seven Of Diamonds
		case 20:
			Rect.top = 760;
			Rect.left = 420;
			break;
			//Eight Of Diamonds
		case 21:
			Rect.top = 570;
			Rect.left = 420;
			break;
			//Nine Of Diamonds
		case 22:
			Rect.top = 380;
			Rect.left = 420;
			break;
			//Ten Of Diamonds
		case 23:
			Rect.top = 190;
			Rect.left = 420;
			break;
			//Jack Of Diamonds
		case 24:
			Rect.top = 1710;
			Rect.left = 280;
			break;
			//Queen Of Diamonds
		case 25:
			Rect.top = 1330;
			Rect.left = 280;
			break;
			//King Of Diamonds
		case 26:
			Rect.top = 1520;
			Rect.left = 280;
			break;


			//Ace Of Spades
		case 27:
			Rect.top = 570;
			Rect.left = 0;
			break;
			//Two Of Spades
		case 28:
			Rect.top = 380;
			Rect.left = 140;
			break;
			//Three Of Spades
		case 29:
			Rect.top = 190;
			Rect.left = 140;
			break;
			//Four Of Spades
		case 30:
			Rect.top = 0;
			Rect.left = 140;
			break;
			//Five Of Spades
		case 31:
			Rect.top = 1710;
			Rect.left = 0;
			break;
			//Six Of Spades
		case 32:
			Rect.top = 1520;
			Rect.left = 0;
			break;
			//Seven Of Spades
		case 33:
			Rect.top = 1330;
			Rect.left = 0;
			break;
			//Eight Of Spades
		case 34:
			Rect.top = 1140;
			Rect.left = 0;
			break;
			//Nine Of Spades
		case 35:
			Rect.top = 950;
			Rect.left = 0;
			break;
			//Ten Of Spades
		case 36:
			Rect.top = 760;
			Rect.left = 0;
			break;
			//Jack Of Spades
		case 37:
			Rect.top = 380;
			Rect.left = 0;
			break;
			//Queen Of Spades
		case 38:
			Rect.top = 0;
			Rect.left = 0;
			break;
			//King Of Spades
		case 39:
			Rect.top = 190;
			Rect.left = 0;
			break;


			//Ace Of Hearts
		case 40:
			Rect.top = 1330;
			Rect.left = 140;
			break;
			//Two Of Hearts
		case 41:
			Rect.top = 380;
			Rect.left = 700;
			break;
			//Three Of Hearts
		case 42:
			Rect.top = 950;
			Rect.left = 280;
			break;
			//Four Of Hearts
		case 43:
			Rect.top = 760;
			Rect.left = 280;
			break;
			//Five Of Hearts
		case 44:
			Rect.top = 570;
			Rect.left = 280;
			break;
			//Six Of Hearts
		case 45:
			Rect.top = 380;
			Rect.left = 280;
			break;
			//Seven Of Hearts
		case 46:
			Rect.top = 190;
			Rect.left = 280;
			break;
			//Eight Of Hearts
		case 47:
			Rect.top = 0;
			Rect.left = 280;
			break;
			//Nine Of Hearts
		case 48:
			Rect.top = 1710;
			Rect.left = 140;
			break;
			//Ten Of Hearts
		case 49:
			Rect.top = 1520;
			Rect.left = 140;
			break;
			//Jack Of Hearts
		case 50:
			Rect.top = 1140;
			Rect.left = 140;
			break;
			//Queen Of Hearts
		case 51:
			Rect.top = 760;
			Rect.left = 140;
			break;
			//King Of Hearts
		default:
			Rect.top = 950;
			Rect.left = 140;
			break;
		}
		player1.hands.at(player1.hands.size() - 1).setTextureRect(Rect);
		player1.hands.at(player1.hands.size() - 1).setScale(static_cast <float> (0.4), static_cast <float> (0.4));
		player1.hands.at(player1.hands.size() - 1).setPosition(static_cast <float> (T::Game::length1), static_cast <float> (200));
		T::Game::length1 += 60;
	}


	//Player 2
	if (!player2.isStand)
	{
		if (player2.score > 13)
			player2.isStand = true;
		else
		{
			player2.hand.push_back(deck.at(0));
			deck.erase(deck.begin(), deck.begin() + 1);
			player2.hands.push_back(sf::Sprite());
			player2.hands.at(player2.hands.size() - 1).setTexture(texture[2]);
			Rect.top = 0;
			Rect.left = 280;
			player2.hands.at(player2.hands.size() - 1).setTextureRect(Rect);
			player2.hands.at(player2.hands.size() - 1).setScale(static_cast <float> (0.4), static_cast <float> (0.4));
			player2.hands.at(player2.hands.size() - 1).setPosition(static_cast <float> (T::Game::length2), static_cast <float> (40));
			T::Game::length2 += 60;
		}
	}
}


///Public Functions
//Initialisation
T::Game::Game()
{
	//Initialises The Score
	player1.score = 0;
	player2.score = 0;


	//Initialises The Stand Condition
	player1.isStand = false;
	player2.isStand = false;


	//Initialises The Playing Deck
	for (size_t i = 1; i <= 52; i++)
		deck.push_back(i);
	shuffle();


	//Creates The Window
	window.create(sf::VideoMode(560, 300), "Blackjack");


	//Loads Background
	if (!texture[0].loadFromFile("Resources/Background.jpg"))
		std::cout << "ERROR! Loading Background" << std::endl;
	background.setTexture(texture[0]);
	background.setScale(static_cast <float> (2), static_cast <float> (2));


	//Loads The Font
	if (!font.loadFromFile("Resources/Font.ttf"))
		std::cout << "ERROR! Loading Font" << std::endl;


	//Initialises Text
	for (size_t i = 0; i < 5; i++)
	{
		text[i].setFont(font);
		text[i].setCharacterSize(20);
		text[i].setFillColor(sf::Color::Black);
		text[i].setStyle(sf::Text::Bold);
	}
	text[0].setString("Computer's Hand");
	text[1].setString("Your Hand");
	text[1].setPosition(static_cast <float> (0), static_cast <float> (170));
	text[2].setPosition(static_cast <float> (170), static_cast <float> (170));
	text[3].setString("Hit");
	text[3].setPosition(static_cast <float> (400), static_cast <float> (200));
	text[4].setString("Stand");
	text[4].setPosition(static_cast <float> (400), static_cast <float> (250));


	//Loads The Cards
	if (!texture[1].loadFromFile("Resources/Cards.png"))
		std::cout << "ERROR! Loading Cards" << std::endl;
	if (!texture[2].loadFromFile("Resources/CardBacks.png"))
		std::cout << "ERROR! Loading Card Backs" << std::endl;
	deal();
}


//Termination
T::Game::~Game()
{
	window.close();
	deck.clear();
}


//Runs The Game
void T::Game::run()
{
	sf::FloatRect Rect;


	while (window.isOpen())
	{
		if (player1.isStand)
			hit();
		calculateScore();
		end();
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			else if (!player1.isStand)
			{
				if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{
					Rect = text[3].getLocalBounds();
					Rect.top += 200;
					Rect.left += 400;
					if (Rect.contains(static_cast <float> (event.mouseButton.x), static_cast <float> (event.mouseButton.y)))
						hit();
					else
					{
						Rect = text[4].getLocalBounds();
						Rect.top += 250;
						Rect.left += 400;
						if (Rect.contains(static_cast <float> (event.mouseButton.x), static_cast <float> (event.mouseButton.y)))
							player1.isStand = true;
					}
				}
			}
		}
		display();
	}
}