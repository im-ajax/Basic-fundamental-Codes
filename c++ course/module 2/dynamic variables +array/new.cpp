#include<bits/stdc++.h>
using namespace std;
// int main(){
// int x=10;
// int *p=new int;
//     *p=100;
//     cout<<*p<<endl;
// return 0;
// }

            
            //static array
int *p;
void fun(){
    int x=10;
    p=&x;
    cout<<"fun=>"<<*p<<endl;
    return;
}
int main(){
    fun();
    cout<<"main=>"<<*p<<endl;
    return 0;
}


            // dynamic array
int *p;
void fun(){
    int *x=new int;
    *x=100;
    p=x;
    cout<<"fun=>"<<*p<<endl;
    return;
}
int main(){
    fun();
    cout<<"Main=>"<<*p<<endl;
    return 0;
}