#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number" <<endl;
    cin>>n;
    int row =1;
    while (row<=n)
    {
        int space=n-row;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int column=1;
        while (column<=row)
        {
            cout<<column;
            column++;
            /* code */
        }
        int column2=row-1;
        while (column2)
        {
            cout<<column2;
            column2--;
            /* code */
        }
        
        

        row++;
        cout<<endl;
        /* code */
    }
    

}