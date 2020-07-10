//cpp
#include "tic_tac_toe.h"
#include <iostream>

bool TicTacToe:: game_over()
{
    if (check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_row_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }
    else if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }
    
    return false;
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player; 
    clear_board();
}

void TicTacToe::display_board()const
{
    for (std::size_t i = 0; i < pegs.size(); i += 3)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
    
}

bool TicTacToe::check_column_win()
{


    for (size_t n = 0; n < pegs.size(); n++)
    {
        int countX = 0;
        int countO = 0;

        for (std::size_t i = n; i < pegs.size(); i += 3)
        {
            if (pegs[i] == "X")
            {
                countX += 1;
            }
            else if (pegs[i] == "O")
            {
                countO += 1;
            }
        }

        if (countX == 3)
        {
            return true;
        }
        else if (countO == 3)
        {
            return true;
        }

    }

    return false;
}

bool TicTacToe::check_row_win()
{

    for (size_t i = 0; i < pegs.size(); i += 3)
    {
        if (pegs[i] == "X" && pegs[i+1] == "X" && pegs[i+2] == "X")
        {
            return true;
        }
        else if (pegs[i] == "O" && pegs[i+1] == "O" && pegs[i+2] == "O")
        {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    int i = 0;

    if (pegs[i] == "X" && pegs[i+4] == "X" && pegs[i+8] == "X")
    {
        return true;
    }
    else if (pegs[i] == "O" && pegs[i+4] == "O" && pegs[i+8] == "O")
    {
        return true;
    }

    i = 2;

    if (pegs[i] == "X" && pegs[i+2] == "X" && pegs[i+4] == "X")
    {
        return true;
    }
    else if (pegs[i] == "O" && pegs[i+2] == "O" && pegs[i+4] == "O")
    {
        return true;
    }

    return false;
}

void TicTacToe::set_winner()
{
    winner = "X";
    if (player == winner)
    {
        winner = "O";
    }
    

}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
    
}

bool TicTacToe::check_board_full()const
{
    for (auto peg: pegs)
    {
        if (peg == " ")
        {
            return false;
        }
        
    }
    
    return true;
}

void TicTacToe::clear_board()
{
    for (std::size_t i = 0; i < pegs.size(); i++)
    {
        pegs[i] = " ";
    }
    
}