#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int *p = &x, *q = &y;
    *p = 35;
    *q = 98;
    *p = *q;
    cout << x << "   " << y << endl;
    cout <<*p << "   "<< *q << endl;
    return 0;
}
