#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //print numbers
    for(int i=0; i<=n;i++){
        cout << i <<endl;
    }
    //print name
    string name = "AdityaThelu";
    for(int i=0;i<=n;i++){
        cout << name << endl;
    }
    //print string indexes
    for(int i=0;i<=n;i++){
        cout << name[i] << endl;
    }
}