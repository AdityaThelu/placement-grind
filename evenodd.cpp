#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "enter a value: " << endl;
    cin >> a;
    cout << "you entered: " << a << endl;
    if(a/2==0){
        cout << " the number is even" << endl;
    }
    else{
        cout << "the number is odd" << endl;
    }
}