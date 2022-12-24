#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}
// void swap(int x, int y)
// {
//     x = x + y;
//     y = x - y;
//     x = x - y;
// }
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i = +2)
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
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }cout<<endl;

    printArray(arr, 8);
    cout<<endl;
    swapAlternate(arr,size);
    printArray(arr, size);
    cout<<endl;
    return 0;
}