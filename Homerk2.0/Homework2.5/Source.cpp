#include <iostream>

using namespace std;

int main() {

	double distance, time_sec;
	int time_min;

	cout << "Calculation of running speed." << endl;
	cout << "Enter distance length (meters) = ";
	cin >> distance;

	cout << "Enter time (min.sec) = ";
	cin >> time_min >> time_sec;

	double time_total = time_min * 60 + time_sec;
	double speed = (distance / 1000) / (time_total / 3600);

	cout << "Distance: " << distance << "M." << endl;
	cout << "Time: " << time_min << " Min " << time_sec << " Sec = " << time_total << " Sec." << endl;
	cout << "Your speed while running was " << speed << " Km/h." << endl;

}