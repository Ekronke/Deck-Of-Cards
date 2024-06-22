#include <cstdio>
#include <numeric>
#include <utility>
#include <vector>
#include <iostream>


int main() {
	std::vector<int> deckOfCards = createDeck();
	int firstCard = deckOfCards[0];

	std::cout << firstCard; 
}
