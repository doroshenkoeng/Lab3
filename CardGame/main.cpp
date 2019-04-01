#include <iostream>
#include "Player.h"
#include "CardGame.h"
#include "CardShark.h"
/*!
	\mainpage Лабораторная работа №3
	\section taskname Наследование. Перегрузка
	\author Дорошенко Сергей Э-23
	\version 1
	\date Март, 2019
	\warning 18+
	\copyright Все права защищены.
	\todo В недалеком будущем в игру будет включена система доната разработчику.

	\subsection goal Цель работы:

	Изучить процессы наследования в объектно-ориентированном программировании, а также перегрузку функций и операторов.
	\subsection task Индивидуальное задание

	\subsection variant Вариант 10
	
	Наследовать класс шуллер от базовго класса игрок. В классе шуллер реализовать
	метод, увеличивающий баллы шуллера на 2 с вероятностью 10% за один ход. 
	Сделать перегрузку унарного инкеремента в классе Игрок, для увелечения кол-ва баллов игрока.
	Реализовать перегрузку оператора сравнении так, чтобы при сравнения игроков этим оператором, 
	он возвращал значение выигрыша, проигрыша или ничьи.


*/
int main() {
	CardShark player1;
	Player player2;
	CardGame game(player1, player2);
	game.startGame();
	int result = game.getResult();
	if (result == 1)
	{
		std::cout << "First player won!";
	}
	else if (result == 2)
	{
		std::cout << "Second player won!";
	}
	else std::cout << "Nobody won!";
	return 0;
}