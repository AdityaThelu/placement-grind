#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "enter a and b: " << endl;
    cin >> a >> b;
    cout << "the number " << a << " and " <<b << " are: " <<endl;

    if(a>b){
        cout << a << " is greater than " <<b<< endl;
        for(int i=b; i<=a/2;i++){
            if(a%i!=0){
                cout << a << " is prime" << endl;
                }
        }
    }
    return 0;
}