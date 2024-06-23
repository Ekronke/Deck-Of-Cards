#include <cstdio>
#include <vector>
#include "deckfunctions.h"

// Only ints and chars should be allowed
int main() {
	int input = 0;
	std::vector<int> deckOfCards = createDeck();
	drawWelcomeTxt();

	do {
		printf("Draw cards: ");
		scanf("%d", &input);
		deckOfCards = drawCards(deckOfCards, input);
	}while (input!='q');
	return 0;
}
