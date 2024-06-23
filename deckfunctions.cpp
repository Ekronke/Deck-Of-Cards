#include <cstdio>
#include <numeric>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>	
#include "deckfunctions.h"

void drawWelcomeTxt()
{
	std::string line;
	std::ifstream txtFile ("etc/welcome.txt");
	if (txtFile.is_open())
	{
		while (getline (txtFile,line))
		{
			std::cout << line << '\n';
		}
		txtFile.close();
	}
	else std::cout << "Unable to open file \n";
}

void cardOutput(int card) 
{
    switch (card) 
	{
        case 1:
            std::cout << "Ace of Spades\n";
            break;
        case 2:
            std::cout << "2 of Spades\n";
            break;
        case 3:
            std::cout << "3 of Spades\n";
            break;
        case 4:
            std::cout << "4 of Spades\n";
            break;
        case 5:
            std::cout << "5 of Spades\n";
            break;
        case 6:
            std::cout << "6 of Spades\n";
            break;
        case 7:
            std::cout << "7 of Spades\n";
            break;
        case 8:
            std::cout << "8 of Spades\n";
            break;
        case 9:
            std::cout 
				<< "9 of Spades\n";
            break;
        case 10:
            std::cout << "10 of Spades\n";
            break;
        case 11:
            std::cout << "Jack of Spades\n";
            break;
        case 12:
            std::cout << "Queen of Spades\n";
            break;
        case 13:
            std::cout << "King of Spades\n";
            break;
        case 14:
            std::cout << "Ace of Hearts\n";
            break;
        case 15:
            std::cout << "2 of Hearts\n";
            break;
        case 16:
            std::cout << "3 of Hearts\n";
            break;
        case 17:
            std::cout << "4 of Hearts\n";
            break;
        case 18:
            std::cout << "5 of Hearts\n";
            break;
        case 19:
            std::cout << "6 of Hearts\n";
            break;
        case 20:
            std::cout << "7 of Hearts\n";
            break;
        case 21:
            std::cout << "8 of Hearts\n";
            break;
        case 22:
            std::cout << "9 of Hearts\n";
            break;
        case 23:
            std::cout << "10 of Hearts\n";
            break;
        case 24:
            std::cout << "Jack of Hearts\n";
            break;
        case 25:
            std::cout << "Queen of Hearts\n";
            break;
        case 26:
            std::cout << "King of Hearts\n";
            break;
        case 27:
            std::cout << "Ace of Diamonds\n";
            break;
        case 28:
            std::cout << "2 of Diamonds\n";
            break;
        case 29:
            std::cout << "3 of Diamonds\n";
            break;
        case 30:
            std::cout << "4 of Diamonds\n";
            break;
        case 31:
            std::cout << "5 of Diamonds\n";
            break;
        case 32:
            std::cout << "6 of Diamonds\n";
            break;
        case 33:
            std::cout << "7 of Diamonds\n";
            break;
        case 34:
            std::cout << "8 of Diamonds\n";
            break;
        case 35:
            std::cout << "9 of Diamonds\n";
            break;
        case 36:
            std::cout << "10 of Diamonds\n";
            break;
        case 37:
            std::cout << "Jack of Diamonds\n";
            break;
        case 38:
            std::cout << "Queen of Diamonds\n";
            break;
        case 39:
            std::cout << "King of Diamonds\n";
            break;
        case 40:
            std::cout << "Ace of Clubs\n";
            break;
        case 41:
            std::cout << "2 of Clubs\n";
            break;
        case 42:
            std::cout << "3 of Clubs\n";
            break;
        case 43:
            std::cout << "4 of Clubs\n";
            break;
        case 44:
            std::cout << "5 of Clubs\n";
            break;
        case 45:
            std::cout << "6 of Clubs\n";
            break;
        case 46:
            std::cout << "7 of Clubs\n";
            break;
        case 47:
            std::cout << "8 of Clubs\n";
            break;
        case 48:
            std::cout << "9 of Clubs\n";
            break;
        case 49:
            std::cout << "10 of Clubs\n";
            break;
        case 50:
            std::cout << "Jack of Clubs\n";
            break;
        case 51:
            std::cout << "Queen of Clubs\n";
            break;
        case 52:
            std::cout << "King of Clubs\n";
            break;
        default:
            std::cout << "Invalid card\n";
            break;
    }
}

// Create a deck
std::vector<int> createDeck() 
{	
	int i = 1;
	std::vector<int> deck(51);
	std::iota(std::begin(deck), std::end(deck), i++);
	return deck;
}

// Draw
// Create a new vector that store drawn cards
// Better to be able to countine to draw cards?
std::vector<int> drawCards(std::vector<int>& deck, int n)
{
	for (int i = 0; i < n; i++) 
	{
		int card = deck[0];
		cardOutput(deck[0]);
		deck.erase(deck.begin());
		deck.push_back(card);
	}
	return deck;
}

// Naive implementation of Fisher-Yates
std::vector<int> shuffleCards(std::vector<int>& deck)
{
	int j = 0;
	int temp = 0;
	srand (time(NULL));
	for (int i = 51; i > 0; i--)
	{
		j = rand() % 51;
		temp = deck[j];
		deck[j] = deck[i];
		deck[i] = temp;
	}
	return deck;
}
		
		
	



