#include <iostream>
using namespace std;
// int swap(int start, int end)
// {
//     int f = start, b = end;
//     f = f + b;
//     b = f - b;
//     f = f - b;
// }
int reverse(int arr[], int size)
{
    int start = 0;
    int end = size-1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
   
    
}
void printArray(int arr[],int size){
    for(int i = 0; i < size; i++) {
        cout<<arr[i]<<"  ";
    }
}

int main()
{
    int arr[100];
    cout << "enter the size of the array" << endl;
    int size;
    cin >> size;
    cout << "enter the elements of array for size  " << size << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // cout << "the array to be reversed is " << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << "  ";
    // }
        cout << "the reversed array is " << endl;

    reverse(arr, size);
     printArray(arr,size);
   
}