#include <iostream>
using namespace std;
void MaxsubarraybyKadanesAlgo(int arr[], int n)
{
    int max = INT_MIN;
    int curSum = 0;
    for (int i = 0; i < n; i++)
    {
        curSum = curSum + arr[i];
        if (curSum > max)
        {
            max = curSum;
        }
        if (curSum < 0)
        {
            curSum = 0;
        }
    }
    cout << endl;
    cout << "max= " << max;
}

int main()
{
    int arr[] = {1, -2, 6, -1, 3};
    int n = size(arr);
    MaxsubarraybyKadanesAlgo(arr, n);
    return 0;
}