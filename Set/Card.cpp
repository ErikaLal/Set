#include "Card.h"

int Card::getValue() {
	return value;
}

std::string Card::getColour() {
	return colour;
}

std::string Card::getShape() {
	return shape;
}

std::string Card::getFill() {
	return fill;
}

Card::Card(int value, std::string colour, std::string shape, std::string fill) : value{ value }, colour{ colour }, 
	shape{ shape }, fill{ fill } {}
 
bool checkValues(std::shared_ptr<Card> card1, std::shared_ptr<Card> card2, std::shared_ptr<Card> card3)
{
	if ((card1->getValue() == card2->getValue() && card2->getValue() == card3->getValue()) ||
		(card1->getValue() != card2->getValue() && card2->getValue() != card3->getValue() && card1->getValue() != card3->getValue())) {
		return true;
	}
	return false;
}

bool checkColours(std::shared_ptr<Card> card1, std::shared_ptr<Card> card2, std::shared_ptr<Card> card3)
{
	if ((card1->getColour() == card2->getColour() && card2->getColour() == card3->getColour()) ||
		(card1->getColour() != card2->getColour() && card2->getColour() != card3->getColour() && card1->getColour() != card3->getColour())) {
		return true;
	}
	return false;
}

bool checkShapes(std::shared_ptr<Card> card1, std::shared_ptr<Card> card2, std::shared_ptr<Card> card3)
{
	if ((card1->getShape() == card2->getShape() && card2->getShape() == card3->getShape()) ||
		(card1->getShape() != card2->getShape() && card2->getShape() != card3->getShape() && card1->getShape() != card3->getShape())) {
		return true;
	}
	return false;
}

bool checkFills(std::shared_ptr<Card> card1, std::shared_ptr<Card> card2, std::shared_ptr<Card> card3)
{
	if ((card1->getFill() == card2->getFill() && card2->getFill() == card3->getFill()) ||
		(card1->getFill() != card2->getFill() && card2->getFill() != card3->getFill() && card1->getFill() != card3->getFill())) {
		return true;
	}
	return false;
}

bool isSet(std::shared_ptr<Card> card1, std::shared_ptr<Card> card2, std::shared_ptr<Card> card3)
{
	return checkValues(card1, card2, card3) && checkColours(card1, card2, card3) && checkShapes(card1, card2, card3) 
		&& checkFills(card1, card2, card3);
}