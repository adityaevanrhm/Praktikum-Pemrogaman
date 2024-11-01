#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}
int subs(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int divi(int a, int b) {
    return a / b;
}
int main() {
    int a, b;
    cout << "Input two numbers: ";
    cin >> a >> b;
    cout << "The Addition is: " << add(a, b) << endl;
    cout << "The Substraction is : " << Subs(a, b) << endl;
    cout << "The Multiplication is: " << mul(a, b) << endl;
    cout << "The Division is: " << divi(a, b) << endl;
    return 0;
}
