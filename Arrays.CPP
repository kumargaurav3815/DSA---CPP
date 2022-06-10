#include <iostream>
using namespace std;
bool isPresent(int arr[2][2], int key, int i, int j)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[i][j] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter the element to serach: ";
    int key;
    cin >> key;
    if (isPresent(arr, key, 2, 2))
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Not Found";
    }
}
