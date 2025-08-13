#include <bits/stdc++.h>
using namespace std;
            // without constructor
// class Student{
// public:
//     int roll;
//     int cls;
//     double gpa;
// };
// int main() {
//         Student rahim;
//         rahim.roll=48;
//         rahim.cls=5;
//         rahim.gpa=4.56;

//         Student karim;
//         karim.roll=45;
//         karim.cls=5;
//         karim.gpa=4.12;

//     cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
//     cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;
//     return 0;
// }
class Student{
public:
    int roll;
    int cls;
    double gpa;
    Student(int r,int c,double g)
    {
        roll=r;
        cls=c;
        gpa=g;
    }
};
int main(){
    int r,c;
    double g;
    cin>>r>>c>>g;  //input nile constructor nia kono 
                        //kam nai...
    Student rahim(r,c,g);
    //Student karim(10,5,4.96);
    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
    //cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;
    return 0;
}

    
