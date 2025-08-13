#include<bits/stdc++.h>
using namespace std;
class Student{
        public:
        int roll;
        int cls;
        double gpa;
        Student(int roll,int cls,double gpa){
            this->roll=roll;
            this->cls=cls;
            this->gpa=gpa;
        }
};
Student *fun(){
    Student *Karim=new Student(26,5,4.32);
    return Karim;
}
int main(){
    Student *p=fun();
//    Student Rahim(24,10,5.00);    
cout<<p->roll<<" "<<p->cls<<" "<<p->gpa<<endl;
//cout<<Rahim.roll<<" "<<Rahim.cls<<" "<<Rahim.gpa<<endl;
}    