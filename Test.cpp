#include "Dzialania.hpp"
#include <iostream>
using namespace std;

int main()
{
    if (sum(6, 12) != 18)
    {
        cerr << "Fail: sum" << endl;
        return 1;
    }
    if (sum(6, 5) != 11)
    {
        cerr << "Fail: sum" << endl;
        return 1;
    }


    if (diff(6, 12) != -6)
    {
        cerr << "Fail: diff" << endl;
        return 1;
    }
    if (diff(6, 5) != 1)
    {
        cerr << "Fail: diff" << endl;
        return 1;
    }


    if (prod(6, 6) != 36)
    {
        cerr << "Fail: prod" << endl;
        return 1;
    }
    if (prod(1, 7) != 7)
    {
        cerr << "Fail: prod" << endl;
        return 1;
    }


    if (quot(6, 6) != 1)
    {
        cerr << "Fail: quot" << endl;
        return 1;
    }
    if (quot(12, 6) != 2)
    {
        cerr << "Fail: quot" << endl;
        return 1;
    }


    cout << "Test OK" << endl;
    return 0;
}