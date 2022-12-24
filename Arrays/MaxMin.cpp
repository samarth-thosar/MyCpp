#include<iostream>
using namespace std;
int printarray(int arr[100],int size){
    for(int i=0; i<size;i++){
        cout<<arr[i]<<"  ";
    }


}
int getMin(int arr[],int size){
    int min = arr[0];
    for (int i = 0 ; i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<< " Smallest element in the array is " << min<<endl;
    return min;
}
int getMax(int arr[100],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max= arr[i];
        }
    }
    cout<<"Largest element : "<< max<< endl;
    return max;
}
int main(){
    int size;
    cout << "enter the size of the array   ";
    cin>> size;
    int arr[100];
    cout<<"enter the elements of the array  ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    printarray(arr,size);
    cout<<endl;
    getMax(arr,size);
    getMin(arr,size);


    return 0;
}