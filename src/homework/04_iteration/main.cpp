//write include statements
#include <iostream>
#include "dna.h"

//write using statements
using std:: cout; using std:: cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int answer;
	char yes_no;
	string dna_strand;

	do
	{

    	cout << "\n1) Get GC Content\n";
		cout << "2) Get DNA Complement\n";
		cout << "Enter your choice: \n";
		cin >> answer;
		cout << "Please enter DNA strand\n";
		cin >> dna_strand;

		

		switch (answer)
		{
			case 1: cout << "The content of the strand is: " << get_gc_content(dna_strand) << "\n";
				break;
			case 2: cout << "The complement strand is : " << get_dna_complement(dna_strand) << "\n";
				break;
		}

		cout << "If you would like to continue please enter Y\n";
		cin >> yes_no;
	} while (yes_no == 'y' || yes_no == 'Y');
	
	cout << "Good Bye";
	
	return 0;
}