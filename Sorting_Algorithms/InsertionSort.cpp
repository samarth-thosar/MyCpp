#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;
    cout << "enter the elements of the array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        int current = arr[i];
        int j=i-1;
        while (arr[j]>current&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;        
    }




    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}