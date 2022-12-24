#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch='A';
    cout << "Enter a number" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int column = 1;
        while (column <= n)
        {
            cout << ch << "   ";
            ch++;
            column++;
        }
        cout << endl;
        row++;
    }
}