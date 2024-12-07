#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int *ptrA, *ptrB;

    cout<<"Enter two values: ";
    cin>>a>>b;

    ptrA = &a;
    ptrB = &b;

    cout<<"a = "<<*ptrA<<endl;
    cout<<"b = "<<*ptrB<<endl;
    return 0;
}
