#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number" <<endl;
    cin>>n;
    int row =1;
    while (row<=n)
    {
        int space=2;
        while (space<=row)
        {
            cout<<"  ";
            space++;
            /* code */
        }
        int star=n-row+1;
        while (star)
        {
            cout<<" *";
            star--;
            /* code */
        }
        int star2=n-row;
        while (star2)
        {
            cout<<" *";
            star2--;
            /* code */
        }
        
        

        row++;
        cout<<endl;
        /* code */
    }
    

}