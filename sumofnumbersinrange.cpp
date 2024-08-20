#include<iostream>
using namespace std;
int main(){
    int i,a,b;
    cout << "enter values of a, b: ";
    cin>>a>>b;
    cout << "the values of a & b are: ";
    cout << a << " " << b << endl;
    int sum = 0;
    for(i=a;i<=b;i++)
    sum += i;
    cout << "sum of numbers from a to b is: " << sum << endl;
    return 0;
    }