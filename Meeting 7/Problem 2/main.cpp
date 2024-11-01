#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int n;
    cout << "Input a positive integer: ";
    cin >> n;
    cout << "The Factorial of " << n << " is " << factorial(n);
    return 0;
}
