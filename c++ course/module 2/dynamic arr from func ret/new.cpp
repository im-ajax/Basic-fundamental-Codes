#include<bits/stdc++.h>
using namespace std;
int* fun(){
    int x;
    cin>>x;
    int *a= new int [x];
    for (int i = 0; i < x; i++)
    {
        cin>>a[i];
    }
    return a;
}
int main(){
    int *a=fun();
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}