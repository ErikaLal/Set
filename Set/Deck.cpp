#include <algorithm>
#include "Deck.h"

int randomer(int i) { return rand() % i; }

Deck::Deck(std::vector<std::shared_ptr<Card>> cards) : cards{ cards } {}

void Deck::shuffle() {
	std::random_shuffle(cards.begin(), cards.end(), randomer);
}

std::shared_ptr<Deck> Deck::initDeck() {
	std::vector<std::shared_ptr<Card>> newCards;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				for (int l = 0; l < 3; ++l) {
					newCards.emplace_back(std::make_shared<Card>(values[i], colours[j], shapes[k], fills[l]));
				}
			}
		}
	}
	std::shared_ptr<Deck> newDeck = std::make_shared<Deck>(newCards);
	newDeck->shuffle();
	return newDeck;
}

std::shared_ptr<Card> Deck::draw() {
	std::shared_ptr<Card> retval = cards.back();
	cards.pop_back();
	return retval;
}

bool Deck::isEmpty() {
	return cards.empty();
}
