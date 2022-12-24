#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int star=n-row+1;
        while (star)
        {
            cout<<"* ";
            star--;
        }
        
        
        cout<<endl;

        row++;        
    }
}