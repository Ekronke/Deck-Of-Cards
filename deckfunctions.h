#ifndef DECKFUNCTIONS_H
#define DECKFUNCTIONS_H

#include <vector>

void cardOutput(int card);

std::vector<int> createDeck();

std::vector<int> drawCards(std::vector<int>& deck, int n);

std::vector<int> shuffleCards(std::vector<int>& deck);

#endif 

