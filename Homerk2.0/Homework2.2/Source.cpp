#include <iostream>

using namespace std;

int main() {
    double v, t, a, S;

    cout << "Enter v: ";
    cin >> v;

    cout << "Enter t: ";
    cin >> t;

    cout << "Enter a: ";
    cin >> a;

    S = v * t + (a * t * t) / 2;

    cout << "S = " << S << endl;

}
