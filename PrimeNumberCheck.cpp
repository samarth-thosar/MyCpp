#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int i;
    int n, sum = 0;
    cout << "enter a number" << endl;
    cin >> n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            sum++;
        }
    }
    if(sum==2){
        cout<<"The Nmber is Prime";

    }
else{
    cout<< "the number is not prime";
}
    
        

    return 0;
}