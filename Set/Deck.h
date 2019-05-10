#pragma once
#include <vector>
#include <memory>
#include "Card.h"

class Deck {
	std::vector<std::shared_ptr<Card>> cards;

public:
	// constructor
	Deck(std::vector<std::shared_ptr<Card>> cards);
	void shuffle();
	std::shared_ptr<Deck> initDeck();
	std::shared_ptr<Card> draw();
	bool isEmpty();
};

