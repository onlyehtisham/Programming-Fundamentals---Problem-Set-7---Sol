#include <iostream>

using namespace std;

int main()
{
    int arr[10], max;
    int *ptrMax;

    cout<<"Enter number 1: ";
    cin>>arr[0];
    max = arr[0];

    for (int i = 1; i < 10; i++)
    {
        cout<<"Enter number "<<i+1<<": ";
        cin>>arr[i];
        if (max < arr[i])
            max = arr[i];
    }

    ptrMax = &max;
    cout<<"Maximum value using pointer is: "<<*ptrMax<<endl;

    return 0;
}
