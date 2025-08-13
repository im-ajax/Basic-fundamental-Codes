#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string n;
    int r;
    int math_marks;
    int eng_marks;
    Student(string name,int roll,int math,int eng)
    {
        this->n = name;
        this->r = roll;
        this->math_marks = math;
        this->eng_marks = eng;
    }
    void hello(){
        cout<<"Hello From Sakib"<<endl;
    }
};
int main(){
    Student sakib("Shakib Ahmed",23,35,67);
    sakib.hello();
    cout<<sakib.n<<" "<<sakib.r<<endl;
    Student rakib("Ra9ib Ahmed",33,54,67);
    rakib.hello();
    cout<<rakib.n<<rakib.r<<endl;
    return 0;
}


/* Constructor er khetre amra jokhn this dibo tokhn hoy
    amra dereferencing kore man nite hbe or this-> evabe
    dite hbe.
    
    class er vitore ja hishebe nibo ta hishebe change krte
    parbo example:
    
    class e jodi "string name" nei taile
    constructor e function name dite hbe
    
    this->(class name)n = (func name) Name
    
    evabe nite hbe 
    mane holo bam side e ami class er name ta 
    "this" e dibo ar function er name ta this-> er por nibo
    mane dan side e
    
*/