#include "gtest/gtest.h"
#include "CardGame.h"
#include "Player.h"

//! Тест конструктора без параметров
TEST(Player, DefaultConstructor) {
	Player player;
	ASSERT_EQ(36, player.getCardsNumber());
	ASSERT_EQ(0, player.getCurrentScore());
}

//! Тест геттера, который возвращает номер хода, на котором используется суперспособность.
TEST(Player, SuperSkillTimeCame) {
	Player player;
	ASSERT_EQ(1, player.isSuperSkillTimeCame(player.getSuperSkillMoveNumber()));
}

//! Тест геттера, который возвращает номер хода, на котором используется суперспособность, на стабильность.
TEST(Player, SuperSkillTimeCameStability) {
	Player player;
	ASSERT_EQ(0, player.isSuperSkillTimeCame(-123));
}

//! Тест метода, который инкрементирует счетчик количества баллов игрока.
TEST(Player, Increment) {
	Player player;
	player.increment();
	ASSERT_EQ(1, player.getCurrentScore());
}

//! Тест на диапазон значений результата игры.
TEST(CardGame, GetResult) {
	Player player1, player2;
	CardGame game(player1, player2);
	game.startGame();
	ASSERT_LT(-1, game.getResult());
	ASSERT_GT(3, game.getResult());
}

//! Тест унарного префиксного оператора.
TEST(Player, OperatorIncrement) {
	Player player;
	++player;
	ASSERT_EQ(1, player.getCurrentScore());
}

//! Тест бинарного оператора сравнения.

TEST(Player, OperatorLessThan) {
	Player player1, player2;
	++player1;
	ASSERT_EQ(2, player2 < player1);
}


int main(int argc, char ** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	if (!RUN_ALL_TESTS())
	{
		std::cout << "All Tests are Passed." << std::endl;
	}
	else
	{
		std::cerr << "One or more tests FAILED!" << std::endl;
	}
	return 0;
}
