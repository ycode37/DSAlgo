#include <iostream>
using namespace std;

int main()
{

    cout << "Hello";
    int size;
    cout << "Enter Size of Array";
    cin >> size;
    // int arr[] = {1,2,3,4,5};
    int arr[size]; // Acchi habit nahi hai acchi yeh hai ki koi constant ddaal do istead of this

    cout << " " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << "Size of Array is " << sizeof(arr) / sizeof(arr[0]) << " "; // this is how to calculate size of an array

    int ans = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }
    cout << endl;
    cout << "largest number in this array is " << ans;

    return 0; // program ended succcessfully
}