#include <bits/stdc++.h>
using namespace std;
class Student{
        public:
        int roll;
        int cls;
        double gpa;
        Student(int r,int c,double g){
            this->roll=roll;
            this->cls=cls;
            this->gpa=gpa;
        }
};
int main(){
    Student Rahim(24,10,5.00);
Student *Karim= new Student(26,5,4.32);
    cout<<Rahim.roll<<" "<<Rahim.cls<<" "<<Rahim.gpa<<endl;
cout<<Rahim.roll<<" "<<Rahim.cls<<" "<<Rahim.gpa<<endl;
    return 0;
}
