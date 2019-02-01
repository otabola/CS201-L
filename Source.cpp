#include <iostream>
#include <string>
using namespace std;

int main() {
	string name; // Declaring name variable

	cout << "Please enter your name:";
	cin >> name; // Entering name
	cout << " " << endl;

	float homeworkScore; // Declaring Homework Score
	float testScore; // Declaring Test Score
	float quizScore; // Declaring Quiz Score
	float attendanceScore; // Declaring Attendance Score

	cout << "Please enter your homework score: ";
	cin >> homeworkScore;  // Entering Homework Score
	cout << " " << endl;

	cout << "Please enter your test score: ";
	cin >> testScore; // Entering Test Score
	cout << " " << endl;

	cout << "Please enter your quiz score: ";
	cin >> quizScore; // Entering Quiz Score
	cout << " " << endl;

	cout << "Please enter your attendance score: ";
	cin >> attendanceScore; // Entering Attendance Score
	cout << " " << endl;

	float total; // Declaring Total

	total = (homeworkScore * .20) + (testScore * .50) + (quizScore * .20) + (attendanceScore * .10); // Calculating Total Weighted Average

	cout << "Your weighted average is: " << total << "%" << endl;
	system("pause");



	return 0;
}
