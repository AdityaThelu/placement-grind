#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    if (n <= 1) {
        cout << "Number is Not prime" << endl;
    } else {
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                cout << "Number is Not prime" << endl;
                return 0;
            }
        }
        cout << "Number is Prime";
    }

    return 0;
}