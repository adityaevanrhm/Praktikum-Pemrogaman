#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> result;

	// looping from 1 to 100
	for (int i = 1; i <= 100; i++) {
		if (i%3==0 && i%5==0) {
			result.push_back("FizzBuzz");
		} else if (i%3==0) {
			result.push_back("Fizz");
		} else if (i%5==0) {
			result.push_back("Buzz");
		} else {
			result.push_back(to_string(i));
		}
	}
	
	// Print the result
	for(int i=0; i<(int)result.size(); i++)
	{
		cout<<result[i]<<' ';
	}
	cout<<'\n';

	return 0;
}
