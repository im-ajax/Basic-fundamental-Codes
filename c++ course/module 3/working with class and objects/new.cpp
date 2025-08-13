#include <bits/stdc++.h>
using namespace std;
class obj{
    public:
    int i;
    char name[100];
    char sec;
    int m;
};
int main(){
    obj rahim;
    
    cin>>rahim.i;
    cin.ignore();
    cin.getline(rahim.name,100);
    cin>>rahim.sec>>rahim.m;

    obj rakib;

    cout<<rahim.i<<" "<<rahim.name<<" "<<rahim.sec<<" "<<rahim.m<<endl;
    // cout>>rakib.i>>" ">>rakib.name>>" ">>rakib.sec>>" ">>rakib.m>>endl;
    return 0;
}

// int main() {
//     Student a,b;
//         // basic
//     a.roll=10;
//     a.gpa=4.56;
//     char temp[100]="Shakib Ahmed";
//         strcpy(a.name,temp);
//     cin>>a.name>>a.roll>>a.gpa;
//     // cin>>b.name>>b.roll>>b.gpa;
//             cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
//             cout<<b.name<<" "<<b.roll<<" "<<b.gpa<<endl;

//                 // with space
//         cin.getline(a.name,100);
//     cin>>a.roll>>a.gpa;
//         cin.ignore();
//         cin.getline(b.name,100);
//     cin>>b.roll>>b.gpa;
//             cout<<a.name<<" "<<a.roll<<" "<<a.gpa<<endl;
//             cout<<b.name<<" "<<b.roll<<" "<<b.gpa<<endl;
    // return 0;
// }