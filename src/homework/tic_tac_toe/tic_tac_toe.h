//h
#include<iostream>
#include<string>

using std::string;

// The classic TicTacToe game alternatively place Xs and Os on a 3x3 grid.The winner is the first player to place 3 consecutive marks in a horizontal, vertical or diagonal row.

class TicTacToe
{
public:
	void start_game(string first_player);
	void mark_board(int position);
	// Return the next_player value
	string get_player() const { return next_player; }



private:
	
	//Set next_player. If private variable player X, player is O else player is X
	void set_next_player();
	string player;


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