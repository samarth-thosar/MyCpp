
/*
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.
Note:
Unique element is always present in the array/ list according to the given condition.
Sample Input :
1
7
2316362
Sample Output :
1
*/
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
int FindUnique(int arr[],int size){
    int answer=0;
    for(int i=0;i<size;i++){
        answer=answer^arr[i];
    }
    return answer;

}
int main(){
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    AcceptValuesOfArray(arr,size);
    PrintArray(arr,size);
    cout<<"The output of the unique element is "<<FindUnique(arr,size)<<endl;

    return 0;

}