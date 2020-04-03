//1) Prompt the user for first player
//2) Start the game
//3) In a user - controlled loop prompt the user for a position(int type) and call the mark_board tic tac toe class member function.Loop continues while user opts in.
//4) Use a try catch block to check for an Error return when user enters incorrect data.
#include "tic_tac_toe.h"
using std::cout;
using std::cin;
using std::string;

int main()
{
	int option = 1;
	int position;
	while (option == 1)
	{
		string first_player;
		TicTacToe game;
		cin >> first_p;
		while (end_game == 0)
		{
			(!(first_player == "O" || first_player == "X"))
		{
			cout << "Please choose one: 'X' or 'O'\n";
			cin >> first_player;
			try {
				game.start_game(first_player);
			}
			catch (Error e) {

				cout << e.get_message();
			}

		}
			while (!game.game_over())
			{
				cout << "Please enter a position \n";
				cin >> position;
				try {
					game.mark_board(position);
				}
				catch (Error e) {
					cout << e.get_message();
				}
				game.display_board();
			}
			cout << "\nThe winner is: " << game.get_winner() << "\n";
			cout << "Enter '1' to continue with the game or '2' to finish.\n";
			cin >> option;
		

		
	}
	return 0;
}
