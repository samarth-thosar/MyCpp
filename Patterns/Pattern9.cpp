#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" emter a number";
    cin>> n;
    int row=1;
    while (row<=n)

    {
        int column=1;
        int count=row;
        while (column<=row)
        {
            cout<<count<<"  ";
            count--;
            column++;
        }
        cout<<endl;
        row++;

        /* code */
    }
    
}