#include <iostream>
#include "Operations.hpp"
using namespace std;

int main() {
int a,b;

cout << "a + b = " << sum(a,b) << endl;
cout << "a - b = " << diff(a,b) << endl;
cout << "a * b = " << prod(a,b) << endl;
cout << "a / b = " << quot(a,b) << endl;

return 0;
}
