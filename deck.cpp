#include <stack>
#include <vector>

// CHANGE stack to vector

// Switch case for numbers to correct card

// Create a deck
std::stack<int> createDeck() 
{	
	std::stack<int> deck;
	for (int i = 1; i <= 52; i++)
	{
		deck.push(i);
	}
	return deck;
}

// Draw
std::pair<std::stack<int>,std::vector<int>> drawCards(std::stack<int> deck, int n)
{
	for (int i = 1; i < n; i++) 
	{
		vector<int> drawnCards
	
	}
	return std:make_pair(deck, drawnCards)
}


// Shuffle


// Deal

int main() {


}
