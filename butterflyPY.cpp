#include <iostream>
using namespace std;
void prin(int n, int i)
{
    for (int j = 1; j <= i; j++)
    {
        cout << "*";
    }
    for (int j = 1; j < 2 * n - 2 * i; j++)
    {
        cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
        cout << "*";
    }
}
int main()
{
 int n;
    cout<<"enter num";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        prin(n, i);
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        prin(n, i);
        cout << endl;
    }
    return 0;
}