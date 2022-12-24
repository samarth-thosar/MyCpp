#include <iostream>
using namespace std;
int checkIf1(int arr[], int n)
{
    // int if1 = arr[0];
    for (int i = 0; i < n; i++)
    {
        int if1= arr[i];
        if (if1 == 1)
        {
            cout << "Index of 1 is " << i;
            return i;
        }
        
    }
    cout << "1 is not present in the array";
            return 0;
}
int main()
{
    int arr[100];
    cout << "enter the size of the array" << endl;
    int n;
    cin >> n;
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    checkIf1(arr, n);

    return 0;
}