#pragma once
#include "Player.h"
class CardShark :
	public Player
{
public:
	//! Метод, увеличивающий баллы шуллера на 2 с вероятностью 10%.
	void increment();

};

