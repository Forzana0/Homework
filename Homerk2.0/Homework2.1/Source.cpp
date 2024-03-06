#include <iostream>

using namespace std;

int main() {

    double L;
    cout << "Enter L: ";
    cin >> L;

    const double PI = 3.14;

    double r = L / (2 * PI);

    double S = PI * r * r;

    cout << "r: " << r << endl;
    cout << "S: " << S << endl;

}
