#include <cstdio>
#include <numeric>
#include <vector>
#include <iostream>

void cardOutput(int card) {
    switch (card) {
        case 1:
            std::cout << "Ace of Spades";
            break;
        case 2:
            std::cout << "2 of Spades";
            break;
        case 3:
            std::cout << "3 of Spades";
            break;
        case 4:
            std::cout << "4 of Spades";
            break;
        case 5:
            std::cout << "5 of Spades";
            break;
        case 6:
            std::cout << "6 of Spades";
            break;
        case 7:
            std::cout << "7 of Spades";
            break;
        case 8:
            std::cout << "8 of Spades";
            break;
        case 9:
            std::cout << "9 of Spades";
            break;
        case 10:
            std::cout << "10 of Spades";
            break;
        case 11:
            std::cout << "Jack of Spades";
            break;
        case 12:
            std::cout << "Queen of Spades";
            break;
        case 13:
            std::cout << "King of Spades";
            break;
        case 14:
            std::cout << "Ace of Hearts";
            break;
        case 15:
            std::cout << "2 of Hearts";
            break;
        case 16:
            std::cout << "3 of Hearts";
            break;
        case 17:
            std::cout << "4 of Hearts";
            break;
        case 18:
            std::cout << "5 of Hearts";
            break;
        case 19:
            std::cout << "6 of Hearts";
            break;
        case 20:
            std::cout << "7 of Hearts";
            break;
        case 21:
            std::cout << "8 of Hearts";
            break;
        case 22:
            std::cout << "9 of Hearts";
            break;
        case 23:
            std::cout << "10 of Hearts";
            break;
        case 24:
            std::cout << "Jack of Hearts";
            break;
        case 25:
            std::cout << "Queen of Hearts";
            break;
        case 26:
            std::cout << "King of Hearts";
            break;
        case 27:
            std::cout << "Ace of Diamonds";
            break;
        case 28:
            std::cout << "2 of Diamonds";
            break;
        case 29:
            std::cout << "3 of Diamonds";
            break;
        case 30:
            std::cout << "4 of Diamonds";
            break;
        case 31:
            std::cout << "5 of Diamonds";
            break;
        case 32:
            std::cout << "6 of Diamonds";
            break;
        case 33:
            std::cout << "7 of Diamonds";
            break;
        case 34:
            std::cout << "8 of Diamonds";
            break;
        case 35:
            std::cout << "9 of Diamonds";
            break;
        case 36:
            std::cout << "10 of Diamonds";
            break;
        case 37:
            std::cout << "Jack of Diamonds";
            break;
        case 38:
            std::cout << "Queen of Diamonds";
            break;
        case 39:
            std::cout << "King of Diamonds";
            break;
        case 40:
            std::cout << "Ace of Clubs";
            break;
        case 41:
            std::cout << "2 of Clubs";
            break;
        case 42:
            std::cout << "3 of Clubs";
            break;
        case 43:
            std::cout << "4 of Clubs";
            break;
        case 44:
            std::cout << "5 of Clubs";
            break;
        case 45:
            std::cout << "6 of Clubs";
            break;
        case 46:
            std::cout << "7 of Clubs";
            break;
        case 47:
            std::cout << "8 of Clubs";
            break;
        case 48:
            std::cout << "9 of Clubs";
            break;
        case 49:
            std::cout << "10 of Clubs";
            break;
        case 50:
            std::cout << "Jack of Clubs";
            break;
        case 51:
            std::cout << "Queen of Clubs";
            break;
        case 52:
            std::cout << "King of Clubs";
            break;
        default:
            std::cout << "Invalid card";
            break;
    }
}

// Create a deck
std::vector<int> createDeck() 
{	
	int i = 1;
	std::vector<int> deck(100);
	std::iota(std::begin(deck), std::end(deck), i++);
	return deck;
}

// Draw
std::pair<std::vector<int>, std::vector>

// Shuffle


// Deal
