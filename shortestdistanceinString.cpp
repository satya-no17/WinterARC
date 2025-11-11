#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    string a = "WNEENESENNN";
    int n = a.length();
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'W')
        {
            x--;
        }
        else if (a[i] == 'E')
        {
            x++;
        }
        else if (a[i] == 'N')
        {
            y++;
        }
        else if (a[i] == 'S')
        {
            y--;
        }

        else
        {
            break;
        }
    }
    cout << sqrt((x * x) + (y * y));

    return 0;
}