#include "tic_tac_toe.h"
#include <iostream>
using std::cout; using std::cin;

int main() 
{
	TicTacToe tic_tac_toe;
	std::string player;
	char answer;



	do
	{
		cout<<"Enter X or O: \n";
		cin>>player;

		while (!(player == "X" || player == "O"))
		{
			cout<< "Invalid input. Please enter X or O: \n";
			cin>> player;
		}
		
		

		tic_tac_toe.start_game(player);

		do
		{
			int position;
			cout<< "Enter position from 1 to 9: ";
			cin>>position;
			tic_tac_toe.mark_board(position);
			tic_tac_toe.display_board();

		} while (tic_tac_toe.game_over() == false);
		
		cout<< "The winner is: " << tic_tac_toe.get_winner() << "\n";
		cout<< "Would you like to play another game? Y or N \n";
		cin >> answer;

	} while (answer == 'Y' || answer == 'y' );

	std::cout<<"Game Over";
	

	return 0;
}