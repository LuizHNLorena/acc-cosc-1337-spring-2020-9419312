//teststing push 
#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/



/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8
*/
bool TicTacToe3::check_colunm_win()
{
	if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
	{
		return true;
	}
	else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
	{
		return true;
	}
	else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
	{
		return true;
	}
	else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
	{
		return true;
	}
	else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TicTacToe3::check_row_win()
{
	if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
	{
		return true;
	}
	else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
	{
		return true;
	}
	else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
	{
		return true;
	}
	else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
	{
		return true;
	}
	else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TicTacToe3::check_diagonal_win()
{
	if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
	{
		return true;
	}
	else if (pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O")
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool TicTacToe4::check_colunm_win()
{
	if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] == pegs[12])
	{
		return true;
	}
	else if (pegs[1] == pegs[5] && pegs[5] == pegs[9] && pegs[9] == pegs[13])
	{
		return true;
	}
	else if (pegs[2] == pegs[6] && pegs[6] == pegs[10] && pegs[10] == pegs[14])
	{
		return true;
	}
	else if (pegs[3] == pegs[7] && pegs[7] == pegs[11] && pegs[11] == pegs[15])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TicTacToe4::check_row_win()
{
	if (pegs[0] == pegs[1] && pegs[1] == pegs[2] && pegs[2] == pegs[3])
	{
		return true;
	}
	else if (pegs[4] == pegs[5] && pegs[5] == pegs[6] && pegs[6] == pegs[7])
	{
		return true;
	}
	else if (pegs[8] == pegs[9] && pegs[9] == pegs[10] && pegs[10] == pegs[11])
	{
		return true;
	}
	else if (pegs[12] == pegs[13] && pegs[13] == pegs[14] && pegs[14] == pegs[15])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TicTacToe4::check_diagonal_win()
{
	if (pegs[0] == pegs[5] && pegs[5] == pegs[10] && pegs[10] == pegs[15])
	{
		return true;
	}
	else if (pegs[3] == pegs[6] && pegs[6] == pegs[9] && pegs[9] == pegs[12])
	{
		return true;
	}
	else
	{
		return false;
	}
}