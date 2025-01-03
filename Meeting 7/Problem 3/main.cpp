#include <iostream>
using namespace std;

int small(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int gcd(int a, int b) {
    int smallNum = small(a, b);
    for (int i = smallNum; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
}

int main() {
    int a, b;
    cout << "Input two numbers: ";
    cin >> a >> b;
    cout << "The Greater Common Division of the number " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}
