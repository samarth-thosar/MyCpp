/*
You are given two arrays 'At and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-
decreasing order. You have to find the intersection of these two arrays.
Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.
Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
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
int * FindArrayIntersection(int arr1[],int arr2[],int n , int m){
    int count;

    int ans[2];
    for(int i=0;i<n;i++){
        for(int j=0;i<m;j++){
            if(arr1[i]==arr2[j]){
                for(int k=0;k<2;k++){
                    count++;
                    arr1[i]=ans[k];
                }
                arr2[j]=0;
                break;
            }
        }
    }
    return ans;

}


int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr1[n];
    cout<<"Enter the elements of the array"<<endl;
    AcceptValuesOfArray(arr1,n);
    
    int m;
    cout<<"Enter the size of the array2";
    cin>>m;
    int arr2[m];
    cout<<"Enter the elements of the array2"<<endl;
    AcceptValuesOfArray(arr2,m);
    int *p;
    p =FindArrayIntersection(arr1,arr2,n,m);
    PrintArray(p,2);


    
    return 0;
}