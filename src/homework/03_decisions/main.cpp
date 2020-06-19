#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::string; using std::vector;
//write include statements
#include "decisions.h"

/*
In main write code to capture a letter_grade and credit_hours from the keyboard:


Grade   Credit Hours	grade_points   credit_points
A          3            4              12
B          3            3               9
C          3            2               6
-----------------------------------------------
           9                           27
After each user input convert the Grade to grade points by calling the get_grade_points function, and
keep a running total for both credit_points and credit_hours.

Call the calculate_gpa function with its arguments.
The GPA should calculate to 3.0, make sure to display it before program exits.

Display:
GPA 3.0

*/
int main() 
{
	vector <int> hours;
	vector <int> points;
	string answer;
	string letter_grade;
	int credit_hours, sum_credit_hours = 0, sum_credit_points = 0;

	do
	{
		cout << "Enter letter grade: ";
		cin >> letter_grade;
		cout << "Enter credit hours: ";
		cin >> credit_hours;
		
		points.push_back(credit_hours * get_grade_points(letter_grade));
		hours.push_back(credit_hours);

		cout<<"More to enter? Y or N \n";
		cin >> answer;

	} while (answer == "Y");

	for (auto n: hours)
	{
			sum_credit_hours += n;
	}

	for (auto n: points)
	{
		sum_credit_points += n;
	}

	double gpa = calculate_gpa(sum_credit_hours, sum_credit_points);
	cout << "GPA: " << gpa;
	return 0;
}