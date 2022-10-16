#include <iostream>
#include "Dzialania.hpp"
using namespace std;

int main() {
int a,b;

cout << "Wynik dodawania = " << sum(a,b) << endl;
cout << "Wynik odejmowania = " << diff(a,b) << endl;
cout << "Wynik mnożenia = " << prod(a,b) << endl;
cout << "Wynik dzielenia = " << quot(a,b) << endl;

return 0;
}
