#include<iostream>
using namespace std;
int LinearSearch(int arr[],int key){
    for(int i=0;i<10;i++){
        if(arr[i]==key){
            cout<<"The required element is at index "<<i<<"."<<endl;  
            return i;
        }
    }   
    cout<<"The required element is not present in the array";
    
}
int BinarySearch(int arr[],int size,int key,int left,int right){
    int mid= left+(right-left)/2;
    if(arr[mid]==key){
        cout<<"The required element is at index "<<mid<<endl;
        return mid;
    }
    if(arr[mid]>key){
        BinarySearch(arr,size,key,left,mid-1);
    }
    return BinarySearch(arr,size,key,mid+1,right);
    cout<<"The required element is not present in the array";

}
int PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    return 1;
}
int main(){
    int size =3;
    int arr[size]={1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    BinarySearch(arr,size,3,0,n);
    // LinearSearch(arr,3);
    PrintArray(arr,size);
    return 0;

}