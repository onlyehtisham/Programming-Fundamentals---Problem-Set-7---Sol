#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    const int SIZE = 10;
    double numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    //double *nPtr = numbers;
    double *nPtr = &numbers[0];

    cout<<fixed<<setprecision(1);

    //cout<<numbers[3];
    //cout<<*(numbers + 3);
    //cout<<nPtr[3];
    cout<<*(nPtr + 8);

    /*
    for (int i = 0; i < SIZE; i++)
    {
        cout<<nPtr[i]<<endl;
    }

    /*
    for (int i = 0; i < SIZE; i++)
        cout<<*(numbers + i)<<endl;
    */

    return 0;
}
