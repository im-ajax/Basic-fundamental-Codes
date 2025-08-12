#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
    Student(string name,int roll,int marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
class cmp{
    public:
        bool operator()(Student l,Student r){
            if(l.marks>r.marks)
                return true;
            else if (l.marks<r.marks){
                return false;
            }
            else{
                return l.roll<r.roll;
            }
            //return l.marks<r.marks;
        }
};
int main(){
    priority_queue<Student,vector<Student>,cmp> pq;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        string name;
        cin>>name;
        int roll,marks;
        cin>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }
    while (!pq.empty()){
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// class Student {
//     public:
//         string name;
//         int roll;
//         int marks;
//     Student(string name, int roll, int marks) {
//         this->name = name;
//         this->roll = roll;
//         this->marks = marks;
//     }
// };

// // Custom comparator for priority queue (max-heap)
// class cmp {
//     public:
//         bool operator()(Student l, Student r) {
//             if (l.marks == r.marks) {
//                 if (l.roll > r.roll) {
//                     return true;
//                 } else {
//                     return false;
//                 }
//             }
//             if (l.marks < r.marks) {
//                 return true;
//             } else {
//                 return false;
//             }
//         }
// };
// int main() {
//     priority_queue<Student, vector<Student>, cmp> pq; // Fix: Added custom comparator
//     int n;
//     cin >> n;
    
//     for (int i = 0; i < n; i++) {
//         string name;
//         int roll, marks;
//         cin >> name >> roll >> marks;
//         pq.push(Student(name, roll, marks));
//     }
//     int q;
//     cin >> q;
//     for (int i = 0; i < q; i++) {
//         int cmd;
//         cin >> cmd;
//         if (cmd == 1) { 
//             if (pq.empty()) cout << "Empty" << endl;
//             else cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
//         } 
//         else if (cmd == 2) { 
//             if (pq.empty()) cout << "Empty" << endl;
//             else {
//                 pq.pop();
//                 if (pq.empty()) cout << "Empty" << endl;
//                 else cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
//             }
//         } 
//         else if (cmd == 0) { 
//             string name;
//             int roll, marks;
//             cin >> name >> roll >> marks;
//             pq.push(Student(name, roll, marks));
//         }
//     }

//     return 0;
// }
