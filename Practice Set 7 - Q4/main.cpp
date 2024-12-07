#include <iostream>

using namespace std;

int main()
{
    double number1 = 7.3, number2;
    double *fPtr;
    fPtr = &number1;
    //cout<<*fPtr;
    number2 = *fPtr;
    //cout<<number2;
    cout<<fPtr;

    return 0;
}
