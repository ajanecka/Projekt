#include <iostream>
#include "Dzialania.hpp"
using namespace std;

int main() {
int a = 0, b = 0;

cout << "Podaj a" << endl;
cin >> a;
cout << "Podaj b" << endl;
cin >> b;

cout << "Wynik dodawania = " << sum(a,b) << endl;
cout << "Wynik odejmowania = " << diff(a,b) << endl;
cout << "Wynik mnożenia = " << prod(a,b) << endl;
cout << "Wynik dzielenia = " << quot(a,b) << endl;

return 0;
}
