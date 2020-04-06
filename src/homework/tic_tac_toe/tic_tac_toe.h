//h
#include<iostream>
#include<string>
#include"vector"
using std::vector;

using std::string; 
using std::cout;


// The classic TicTacToe game alternatively place Xs and Os on a 3x3 grid.The winner is the first player to place 3 consecutive marks in a horizontal, vertical or diagonal row.

class TicTacToe
{
public:
	bool game_over();
	void mark_board(int position);
	void start_game(string first_player);
	
	// Return the next_player value
	string get_player() const { return player; }
	void display_board()const;
	string get_winner()const { return winner; }



private:
	
	//Set next_player. If private variable player X, player is O else player is X
	void set_next_player();
	void clear_board();
	bool check_board_full();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void set_winner();

	std::string player;
	std::vector<std::string> pegs{ 9, " " };
	string winner;
};
class Error
{
public:
	//Constructor: initialized private variable message with function parameter msg
	Error(std::string msg) : message{
		msg } {};
	//Return the message private variable
	std::string get_message()const { return message; }


private:

	std::string message;

};