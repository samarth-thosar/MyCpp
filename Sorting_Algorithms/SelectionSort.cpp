#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>> n;
    cout<<"enter the elements of the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp;
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp; 
            }
        }
    }
    for(int i=0;i<n;i++){
    cout <<arr[i] <<"  ";
    }
    return 0;
}