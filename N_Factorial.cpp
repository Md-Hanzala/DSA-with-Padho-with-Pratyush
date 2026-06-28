#include<iostream>
using namespace std;
int fact(int b){
    int c=1;
    for (int i = b; i >= 1; i--)
    {
        c*=i;
    }
    return c;
}
int main(){
    int a;
    cout<<"Enter number for factorial: ";
    cin>>a;
    cout<<fact(a);
    return 0;
}