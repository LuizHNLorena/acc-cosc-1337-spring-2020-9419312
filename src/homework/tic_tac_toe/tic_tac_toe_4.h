//teststing push 
//h
#include "tic_tac_toe_4.h"

class TicTacToe4 : public TicTacToe
{
public:
	TicTacToe4() : TicTacToe(4) {};
private:
	bool check_colunm_win();
	bool check_row_win();
	bool check_diagonal_win();

};