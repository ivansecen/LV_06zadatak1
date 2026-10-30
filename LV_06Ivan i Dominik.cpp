

#include <iostream>
using namespace std;

int main() {
    int d;
    int imaLiPozivnicu;

    // Unos podataka
    cin >> d >> imaLiPozivnicu;

    // Ugnijež?eno grananje za provjeru uvjeta ulaza
    if (d >= 18) {
        cout << "ULAZ" << endl;
    }
    else {
        if (d >= 16) {
            if (imaLiPozivnicu == 1) {
                cout << "ODBIJEN" << endl;
            }
            else {
                cout << "ODBIJEN" << endl;
            }
        }
        else {
            cout << "ODBIJEN" << endl;
        }
    }

    return 0;
}
           

           

