#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    cout << "enter the elements of the array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp=arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}
