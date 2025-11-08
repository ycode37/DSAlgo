#include <iostream>
using namespace std;

// int return one value
// void return list of values

int search(int arr[], int N, int X)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == X)

            // cout << "The index for searched elemnt is " << i << " ";
            return i;
    }
    return -1;
}

void searchAll(int arr[], int N, int X)
{
    bool found = false;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == X)
        {
            cout << "Value of Serached balue is at index" << i << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "No values Founded";
    }
}

int main()
{

    int arr[5] = {1, 2, 1, 2, 4};
    cout << search(arr, 5, 2) << endl;
    searchAll(arr, 5, 2);
    return 0;
}