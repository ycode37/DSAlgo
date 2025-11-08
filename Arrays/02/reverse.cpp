#include <iostream>
using namespace std;

void reverse(int arr[], int X, int Y)
{
    while (X < Y)
    {
        swap(arr[X], arr[Y]);
        X++;
        Y--;
    }
}

int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};
    reverse(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i];
    }

    return 0;
}
