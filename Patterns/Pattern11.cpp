#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter a number"<<endl;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int column=1;
        char ch='A';    
        while (column<=n)
        {       
            cout<<ch<<"   ";
            ch++;
            column++;   
        }
        cout<<endl;
        row++;
    }

}