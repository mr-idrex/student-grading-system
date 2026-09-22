/*Student grade management project
created by Idrex
A simple c++ project for beginers*/

#include <iostream>
#include <string>

int main()
{
	std::cout << "STUDENT GRADE SYSTEM\n";
	'\n';
	std::cout << "Enter student name: ";//Getting student name
	std::string student_name{};
	std::getline(std::cin, student_name);
	'\n';
	std::cout << "Enter student class: ";//Geting student class
	std::string student_class{};
	std::getline(std::cin, student_class);
	'\n';
	std::cout << "Enter number of subject: ";//Getting number of subject
	int subjects{};
	std::cin >> subjects;
	'\n';
	double score{};
	double sum{ 0 };
	//Error handling
	if (subjects <= 0 )
	{
		std::cout << "Input valid number of subjects\n";
		return 1;
	}
	else {
		for (int i{ 1 }; i <= subjects; ++i)//Loop
		{
			std::cout << "Enter score for subject " << i << ": ";
			std::cin >> score;
			//Error handling
			if (score < 0 || score > 100)
			{
				std::cout << "Input valid number of score\n";
				return 1;
			}
			sum += score;
		}
	}
	//Calculating Average
	double average{ sum / subjects };
	'\n';

	//Display screen
	std::cout << "--------------------\n";
	std::cout << "STUDENT PERFORMANCES\n";
	std::cout << "--------------------\n";
	std::cout << "Name = " << student_name << '\n';
	std::cout << "Class = " << student_class << '\n';
	std::cout << "Numbers of subject= " << subjects << '\n';
	std::cout << "Average = " << average << '\n';

	//Control Flow
	if (average >= 90)
	{
		std::cout << "Final grade = " << "A," << "(Excellent work!)" << '\n';
	}
	else if (average >= 80) {
		std::cout << "Final grade = " << "B," << "(Good work!)" << '\n';
	}
	else if (average >= 70) {
		std::cout << "Final grade = " << "C," << "(Satisfactory work!)" << '\n';
	}
	else if (average >= 60) {
		std::cout << "Final grade = " << "D," << "(Put more effort!)" << '\n';
	}
	else {
		std::cout << "Final grade = " << "F," << "(Fail,try again!)" << '\n';
	}
	std::cout << "----------------------------\n";
	return 0;
}