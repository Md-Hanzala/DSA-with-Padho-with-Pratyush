#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b;
    for (int i = 1; i <= 10; i++)
    {
        cout<<"Enter Number "<<i<<": ";
        cin>>b;
        cout<<endl;
        a+=b;
    }
    cout<<"Sum of 10 numbers are : "<<a;
    return 0;
}