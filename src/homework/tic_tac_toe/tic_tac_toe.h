//h //teststing push 
#include<iostream>
#include<string>
#include"vector"

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H



using std::string; 
using std::cout;


// The classic TicTacToe game alternatively place Xs and Os on a 3x3 grid.The winner is the first player to place 3 consecutive marks in a horizontal, vertical or diagonal row.

class TicTacToe
{
public:
	TicTacToe(int size) : pegs{ size * size, " " } {};
	bool game_over();
	void mark_board(int position);
	void start_game(string first_player);
	
	// Return the next_player value
	string get_player() const { return player; }
	void display_board()const;
	friend std::ostream& operator << (std::ostream& out, const TicTacToe& game);
	friend std::istream& operator >> (std::istream& in, TicTacToe& game);




private:
	
	//Set next_player. If private variable player X, player is O else player is X
	void set_next_player();
	void clear_board();
	bool check_board_full();
	std::string player;
	std::vector<std::string> pegs{ 9, " "}
protected:
	std::vector<string> pegs;
	string winner;
	string next_player;
	virtual bool check_row_win() { return false; }
	virtual bool check_column_win() { return false; }
	virtual bool check_diagonal_win() { return false; }
private:
	bool check_board_full();
	void set_next_player();
	void clear_board();
	void set_winner();

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
#endif // !TIC_TAC_TOE_H