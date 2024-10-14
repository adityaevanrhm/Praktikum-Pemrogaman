#include <iostream>
    using namespace std;
        
    struct fullname {
        string firstname;
        string lastname;
    };
    struct Studentrec {
            fullname name;
            string idNum;
            float midterm;
            float final;
    };
    Studentrec theStudent[10];
        
    int main() {
        int n;
        float m;
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
        cout<<"Midterm Exam Grade : ";
        cin>>theStudent[i].midterm;
        cout<<"Final Exam Grade : ";
        cin>>theStudent[i].final;
    }
    cout<<endl;
    cout<<"Data mahasiswa"<<endl;
    for (int i=0;i<n;i++) {
        m = (theStudent[i].midterm + theStudent[i].final) / 2;
        cout<<theStudent[i].name.firstname<<endl;
        cout<<theStudent[i].name.lastname<<endl;
        cout<<theStudent[i].idNum<<endl;
        cout<<m<<endl;
    }
    system("Pause");
    return 0;
}
