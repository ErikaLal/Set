#pragma once
#include <string>
#include <memory>
#include <vector>

// possible values
const std::vector<int> values = { 1, 2, 3 };
const std::vector<std::string> colours = { "red", "green", "purple" };
const std::vector<std::string> shapes = { "oval", "wave", "diamond" };
const std::vector<std::string> fills = { "solid", "shaded", "blank" };

class Card {
	int value;
	std::string colour;
	std::string shape;
	std::string fill;

public:
	// getters
	int getValue();
	std::string getColour();
	std::string getShape();
	std::string getFill();
	//constructor
	Card(int value, std::string colour, std::string shape, std::string fill);
};

bool checkValues(std::shared_ptr<Card> card1, std::shared_ptr<Card> card2, std::shared_ptr<Card> card3);
bool checkColours(std::shared_ptr<Card> card1, std::shared_ptr<Card> card2, std::shared_ptr<Card> card3);
bool checkShapes(std::shared_ptr<Card> card1, std::shared_ptr<Card> card2, std::shared_ptr<Card> card3);
bool checkFills(std::shared_ptr<Card> card1, std::shared_ptr<Card> card2, std::shared_ptr<Card> card3);
bool isSet(std::shared_ptr<Card> card1, std::shared_ptr<Card> card2, std::shared_ptr<Card> card3);