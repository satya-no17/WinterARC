#include <iostream>
using namespace std;

int main()
{
    string a = "aaaaahhhhhfffffeeeeesssssssssssjjjreeeekwkwwwwww";
    int count = 1;
    string ans = "";
    for (int i = 0; i < a.length(); i++)
    {

        if (a[i] == a[i + 1])
            count++;
        else
        {
            if (count != 1)
            {
                string b = to_string(count);
                ans += a[i];
                ans += b;
                count = 1;
            }
            else
            {
                ans += a[i];
            }
        }
    }
    cout << ans;
    return 0;
}