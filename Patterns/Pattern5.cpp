#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int n;
    cout << "enter a number";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            j++;
            cout << "*";
        }
        cout << endl;
        i++;
    }
}