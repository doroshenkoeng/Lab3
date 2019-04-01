#include "Player.h"
#include <cmath>

void Player::increment()
{
	mCurrentScore++;
}

int Player::getCard()
{
	int card = mDeck.back();
	mDeck.pop_back();
	return card;
}

int Player::getCurrentScore()
{
	return mCurrentScore;
}
bool Player::isSuperSkillTimeCame(int moveNumber)
{
	return mSuperSkillMoveNumber == moveNumber;
}
int Player::getCardsNumber()
{
	return mCardsNumber;
}

int Player::getSuperSkillMoveNumber()
{
	return mSuperSkillMoveNumber;
}

void Player::operator++()
{
	increment();
}

int Player::operator<(Player & player)
{
	if (this->getCurrentScore() > player.getCurrentScore()) return 1;
	else if (this->getCurrentScore() < player.getCurrentScore()) return 2;
	else return 0;
}

Player::Player()
{
	mCardsNumber = 36;
	mCurrentScore = 0;
	std::random_device generator;
	std::mt19937 mt(generator());
	std::uniform_int_distribution<int> distribution1(1, mCardsNumber);
	std::uniform_int_distribution<int> distribution2(1, 4);
	mSuperSkillMoveNumber = distribution1(generator);
	int partOfCardsNumber = int(ceil(0.9*mCardsNumber));
	for (int i = 0; i < partOfCardsNumber; i++) {
		mDeck.push_back(distribution2(mt));
	}
	std::uniform_int_distribution<int> distribution3(1, 5);
	for (int i = 0; i < mCardsNumber - partOfCardsNumber; i++) {
		mDeck.push_back(distribution3(mt));
	}
}
