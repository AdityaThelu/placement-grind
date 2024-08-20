#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the year" << endl;
    cin >> n;
    if(n%4==0 && n%100!=0 || n%400==0){
        cout << "leap year" << endl;
    }
    else{
        cout << "not leap year" << endl;
        }
        return 0;
}