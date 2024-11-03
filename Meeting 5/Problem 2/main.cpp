#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    // Input: number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> input;

    // Input: elements of the array
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
       int x;
       cin>>x;
       input.push_back(x);
    }

    // Reverse the vector
    cout << "Reversed array: ";
    for(int i=(int)input.size()-1; i>=0; i--)
    {
    	cout<<input[i]<<' ';
    }
    cout<<'\n';

    return 0;
}
