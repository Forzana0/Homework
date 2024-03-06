#include <iostream>

using namespace std;

int main() {
	int days, weeks, Lefted_Days;

	cout << "Enter the amount of days: " << endl;
	cin >> days;

	weeks = days / 7;

	Lefted_Days = days % 7;

	cout << "Weeks: " << weeks << endl;
	cout << "Days: " << Lefted_Days << endl;

}