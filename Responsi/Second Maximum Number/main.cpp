#include <iostream>
using namespace std;

int main(){
    int array[5] = {56,9,3,100,11};
    int max = 0;
    int max2 = 0;
    for(int i = 0; i<5; i++){
        if(array[i]>max){
            max2 = max;
            max = array[i];
        }
    }
    cout << max << " is the maximum number and " << max2 << " is the second maximum number";
    
}
