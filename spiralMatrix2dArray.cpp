#include <iostream>
using namespace std;

int main()
{
    int m[4][4];
    int k;
    int len = 4;
    int top = 0, bottom = len - 1, left = 0, right = len - 1;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            cin >> k;
            m[i][j] = k;
        }
    }
    for (; top <= bottom && left <= right; top++, bottom--, left++, right--)
    {
        for (int j = left; j <= right; j++)
        {
            cout << m[top][j] << "  ";
        }
        for (int i = top + 1; i <= bottom; i++)
        {
            cout << m[i][right] << "  ";
        }
        if (top < bottom)
        {
            for (int j = right - 1; j >= left; j--)
            {
                cout << m[bottom][j] << "  ";
            }
        }
        if (left < right)
        {
            for (int i = bottom - 1; i > top; i--)
            {
                cout << m[i][left] << "  ";
            }
        }
    }
    return 0;
}