#include <iostream>
using namespace std;
int main()
{
    int n, a=1;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
        
            cout<<a<<"   ";
            a++;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}