/*
You are given an array 'ARR' of size 'N' containing each number between 1 and 'N' - 1 at least once. There is
a single integer value that is present in the array twice. Your task is to find the duplicate integer value present
in the array.
For example:
Consider ARR =
[1, 2, 3, 4, 4], the duplicate integer value present in the array is 4.
Hence, the answer is 4 in this case.
Note :
A duplicate number is always present in the given array.*/

#include<iostream>
using namespace std;
void PrintArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<", ";
    }cout<<endl;
}
void AcceptValuesOfArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int FindDuplicate(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<size;i++){
        ans=ans^i;
    }
    return ans; 

}
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    AcceptValuesOfArray(arr,size);
    cout<<FindDuplicate(arr,size);
    
    return 0;
}