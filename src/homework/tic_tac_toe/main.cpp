
//teststing push //1) Prompt the user for first player
//2) Start the game
//3) In a user - controlled loop prompt the user for a position(int type) and call the mark_board tic tac toe class member function.Loop continues while user opts in.
//4) Use a try catch block to check for an Error return when user enters incorrect data.
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include<vector>
#include<functional>

using std::cout;
using std::cin;
using std::string;

int main()
{
	int option = 1;
	int position;
	std::vector < std::reference_wrapper<TicTacToe>> games;
	TicTacToe
	while (option == 1)
	{
		int type = 0;
		cout << "Do you want to play tictactoe 3 or 4? " << "\n";
		cin >> type;
		string first_player;
		if (type = 3)

		{
			TicTacToe3 game;
			while (!(first_player == "O" || first_player == "X"))
			{
				try {
					cout << "Please choose one: 'X' or 'O'\n";
					cin >> first_player;
					game.start_game(first_player);
				}
				catch (Error e) {

					cout << e.get_message();
				}
			}

			while (!game.game_over())
			{
				try {
					cin >> game; 
				}
				catch (Error e) {
					cout << e.get_message();
				}
				cout << game;
			}
		}
		else
		{
			TicTacToe4 game;
			while (!(first_player == "O" || first_player == "X"))
			{
				try {
					cout << "Please choose one: 'X' or 'O'\n";
					cin >> first_player;
					game.start_game(first_player);
				}
				catch (Error e) {

					cout << e.get_message();
				}
			}

			while (!game.game_over())
			{
				try {
					cin >> game; 
				}
				catch (Error e) {
					cout << e.get_message();
				}
				cout << game;
			}
		}

		manager.save_game(game);
		cout << "\nThe winner is: " << game.get_winner() << "\n";
		cout << "Enter '1' to continue with the game or '2' to finish.\n";
		cin >> option;
	}

	cout << manager << "\n\n";
	int x, o, t;
	manager.get_winner_totals(x, o, t);
	cout << "Winners: \n";
	cout << "X" << x << "\n";
	cout << "O" << o << "\n";
	cout << "T" << t << "\n";

	return 0;
}