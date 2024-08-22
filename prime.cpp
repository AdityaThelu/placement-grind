#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n < 2){
        cout << "number is not prime" <<endl;
    }else{
        for(int i=2; i<=n/2; i++){
            if(n%i==0){
                cout<<"number is not prime"<<endl;
                return 0;
            }
        }
       cout << "number is prime" << endl;
    }
}