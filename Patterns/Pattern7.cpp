#include <iostream>
using namespace std;
int main()
{
    int n;
    int a = 1;
    cout << "enter a number" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << a<< "  ";
            j++;
            a++;
        }
        cout << endl;

        i++;
        /* code */
    }
}