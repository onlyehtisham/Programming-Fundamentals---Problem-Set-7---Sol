#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;
    unsigned int values[SIZE] = {2, 4, 6, 8, 10};
    //unsigned int *vPtr = values;
    unsigned int *vPtr = &values[0];

    //cout<<values[4];
    //cout<<*(values + 4);
    //cout<<vPtr[4];
    cout<<*(vPtr + 4);

    /*
    for (int i = 0; i < SIZE; i++)
        cout<<vPtr[i]<<endl;
    */

    /*
    for (int i = 0 ; i < SIZE; i++)
        cout<<*(vPtr + i)<<endl;
    */

    return 0;
}
