#include <cstdio>
#include <vector>
#include "deckfunctions.h"

int main() {
	int input = 0;
	std::vector<int> deckOfCards = createDeck();

	do {
		printf("Draw cards: ");
		scanf("%d", &input);
		deckOfCards = drawCards(deckOfCards, input);
	}while (input!=5);
	return 0;
}
