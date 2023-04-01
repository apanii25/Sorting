#include <iostream>
using namespace std;
int bblsort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        bool isswap = false;
        for (int j = 0; j < size - i; j++){
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isswap = true;
            }
        }
        if (isswap == false)
        {
            cout << "Already sorted" << endl;
            break;
        }

    }
}
int printbbl(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int arr[10];
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    bblsort(arr, size);
    printbbl(arr, size);

    return 0;
}