#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int x = i;
        while (j <= n)
        {

            cout << x;
            j++;
            x++;
        }
        cout << endl;
        i++;
    }
}