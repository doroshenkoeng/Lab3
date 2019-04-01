#include "CardGame.h"

CardGame::CardGame(Player & player1, Player & player2)
{
	mPlayer1 = player1;
	mPlayer2 = player2;
	mCardsNumber = player1.getCardsNumber();
}

void CardGame::startGame()
{
	for (int i = 0; i < mCardsNumber; i++) {
		int card1 = mPlayer1.getCard();
		int card2 = mPlayer2.getCard();
		if (mPlayer1.isSuperSkillTimeCame(i)) card1 = 5;
		if (mPlayer2.isSuperSkillTimeCame(i)) card2 = 5;
		if (card1 > card2) {
			mPlayer1.increment();
		}
		else if (card1 < card2) {
			mPlayer2.increment();
		}
	}
}

int CardGame::getResult()
{
	return mPlayer1 < mPlayer2;
}


