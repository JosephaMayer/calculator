

#include <iostream>

int doubleNumber(int x)
{
    return 2 * x;
}



// The following is an alternate way of doing main:
int main()
{
    using namespace std;
    int x;
    cin >> x;
    x = doubleNumber(x);
    cout << x << endl;
    return 0;
}
