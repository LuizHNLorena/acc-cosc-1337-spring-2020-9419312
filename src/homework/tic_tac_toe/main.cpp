//1) Prompt the user for first player
//2) Start the game
//3) In a user - controlled loop prompt the user for a position(int type) and call the mark_board tic tac toe class member function.Loop continues while user opts in.
//4) Use a try catch block to check for an Error return when user enters incorrect data.
#include "tic_tac_toe.h"
using std::cout;
using std::cin;

int main()
{
	try
	{
		string first_p = "";
		cout << "Choose X or O for first player: ";
		TicTacToe game;
		cin >> first_p;
		game.start_game(first_p);
		int end_game = 0;
		while (end_game == 0)
		{
			int position = 0;
			cout << "Enter a position between 1 and 9: ";
			cin >> position;
			game.mark_board(position);
			cout << "if player wants to continue please enter 0: ";
			cin >> end_game;
		}
	}
	catch (error b)
	{
		cout << b.get_message();
	}


	return 0;
}