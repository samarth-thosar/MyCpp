#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int column = 1;
        char ch='A'+row-1;
        
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