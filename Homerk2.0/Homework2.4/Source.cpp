#include <iostream>

using namespace std;

int main() {
    double amount;

    cout << "Enter a fractional number: ";
    cin >> amount; // Писати копійки через .

    int Grn = (int)amount;
    int Cops = (int)((amount - Grn) * 100);

    cout << Grn << " Grn " << Cops << " Cops." << endl;

}