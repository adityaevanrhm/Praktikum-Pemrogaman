#include <iostream>
using namespace std;

struct fullname {
    string firstname;
    string lastname;
};
struct StudentRec {
    fullname name;
    string idNum;
    float gpa;
};
StudentRec theStudent[10];

int main() {
    int n;
    cout<<"Masukkan banyaknya mahasiswa : ";
    cin>>n;
    cout<<"Data mahasiswa"<<endl;
for (int i=0;i<n;i++) {
    cout<<"Nama depan : ";
    cin>>theStudent[i].name.firstname;
    cout<<"Nama belakang : ";
    cin>>theStudent[i].name.lastname;
    cout<<"Nim : ";
    cin>>theStudent[i].idNum;
    cout<<"IPK : ";
    cin>>theStudent[i].gpa;
}
    cout<<endl;
    cout<<"Data mahasiswa"<<endl;
    for (int i=0;i<n;i++) {
    cout<<theStudent[i].name.firstname<<endl;
    cout<<theStudent[i].name.lastname<<endl;
    cout<<theStudent[i].idNum<<endl;
    cout<<theStudent[i].gpa<<endl;
    }
    system("Pause");
return 0;
}
