#include <iostream>
using namespace std;


void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }cout<<endl;
}
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i +=2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int size = 8;
    int arr[size] = {5, 9, 1, 4, 2, 4, 4, 6};
    cout<<"the array previously"<<endl;
    printArray(arr, 8);
    swapAlternate(arr,size);
    cout<<"The array after swapping"<<endl;
    printArray(arr, size);
    return 0;
}