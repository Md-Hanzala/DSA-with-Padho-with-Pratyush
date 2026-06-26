#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=0;
    for (int i = 20; i <= 40; i++)
    {
        if (i%2==0){
            a+=i;
        }
        else {
            continue;
        }
    }
    cout<<"Sum of numbers between 20 and 40 are : "<<a;
    return 0;
}