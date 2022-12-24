#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    char ch='A';
    int row = 1;
    while (row <= n)
    {
        int column = 1;
        
        
        while (column <= row)
        {
            cout << ch << "   ";
            
            column++;
        }
        cout << endl;
        ch++;
        row++;
    }
}