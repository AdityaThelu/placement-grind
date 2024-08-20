#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "enter n value: " << endl;
    cin >> n;
    cout << "the value of n is: " << n << endl;
    int sum = 0;
    for(i=1;i<=n;i++)
        sum += i;
        cout << sum;
}
//the  code is same as sumofnnumbers.cpp
//PS:
//if u place {} after for loop the code is acting weird!!!