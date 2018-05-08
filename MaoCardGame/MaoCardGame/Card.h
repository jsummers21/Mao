#pragma once
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std

enum cardsuite { CLUBS, DIAMONDS, HEARTS, SPADES };

class Card
{
public:
	Card();
	Card(int intCard);
	~Card();
private:
	int intCardValue = 0;
public:
	int getFaceValue();
	int getSuiteValue();
	std::string getFaceString();
	std::string getSuiteString();
	int getValue();
	int setValue(int intCard);
	std::string toString();
};