#include <iostream>
using namespace std;

int main(){
    string word = "racecar";
    bool palindrome = true;
    for(int i=0; i<7/2; i++){
        if(word[i]==word[7-i-1]){
            palindrome = true;
        }
        else palindrome = false;
        break;
    }
    if(!palindrome){
        cout << "The word is not a palindrome";
    }
    else{cout << "The word is a palindrome";}
    return 0;
}
