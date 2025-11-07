#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 54, 32, 5, 3, 5, 3, 6, 6, 664, 3};
    int max = arr[0];
    for (int i = 1; i < size(arr); i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}