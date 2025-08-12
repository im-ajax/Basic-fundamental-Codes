#include <bits/stdc++.h>
using namespace std;
int main(){
    
    // step 1
    // vector<int> v={1,2,3,4,5};
    // vector<int> v2;
    // v2=v;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v2[i]<<" ";
    // }
    // for(int x:v2){
    //     cout<<x<<" ";
    // }
    

    
    // step 2
    // vector<int> v={1,2,3,4,5};
    // v.pop_back();


    // step 3
    // (pos,value);
    // vector<int> v={1,2,3,4,5};
    // vector<int> v2={100,200,300};
    // v.insert(v.begin()+2,v2.begin(),v2.end());
    // for (int x:v)
    // {
    //     cout<<x<<" ";
    // }


    //step 3
    // vector<int> v={1,2,3,4,5};
    // v.erase(v.begin()+2);
    // for (int x:v)
    // {
    //     cout<<x<<" ";
    // }


    //erasing multiple digits
    // vector<int> v={1,2,3,4,5,6};
    // v.erase(v.begin()+1,v.begin()+5);
    // for (int x:v)
    // {
    //     cout<<x<<" ";
    // }


    //replacing digits in vector;
    // vector<int> v={1,2,3,4,5,2};
    // replace(v.begin(),v.end()-1,2,100);
    // for (int x:v)
    // {
    //     cout<<x<<" ";
    // }


    //finder
    // auto it = find(v.begin(),v.end(),5);
    // for(int x:v)
    // if (it==v.end())
    // {
    //     cout<<"Not found"<<endl;
    // }
    // else{
    //     cout<<"Found"<<endl;
    // }


    //step 2 finding a digit in an array
    // int n;
    // cin>>n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>v[i];
    // }
    // auto it = find(v.begin(), v.end(), 50);
    // cout<<*it<<endl;

    vector<int> v={1,2,4,5,6,3};
    cout<<v.back()<<endl;
    cout<<v[3]<<endl;



    return 0;
}


















// class Student {
// public:
//     string name;
//     string cls;
//     string section;
//     int id;
// };
// int main() {
//     int N;
//     cin >> N; 
//     Student students[100];
//     for (int i = 0; i < N; ++i) {
//         cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
//     }
//     for (int i = 0; i < N / 2; ++i) {
//         swap(students[i].section, students[N - i - 1].section); 
//     }
//     for (int i = 0; i < N; ++i) {
//         cout << students[i].name << " " << students[i].cls << " " << students[i].section << " " << students[i].id << endl;
//     }

