#pragma once
#include "Player.h"
//! Класс игры
class CardGame
{

public:
	//! Конструктор с параметрами.
	/*!
		\param player1 объект класса Player - игрок 1.
		\param player2 объект класса Player - игрок 2.
	*/
	CardGame(Player & player1, Player & player2);
	//! Метод, в котором симулируется игра.
	void startGame();
	//! Метод возвращающий результат игры.
	/*!
		\retval 1: выигрыш 1-го игрока;
		\retval 2: выигрыш 2-го игрока;
		\retval 0: ничья.
	*/
	int getResult();
private:
	//! Количество карт в колоде.
	int mCardsNumber;
	//! Объект класса Player.
	Player mPlayer1;
	//! Объект класса Player.
	Player mPlayer2;

};

