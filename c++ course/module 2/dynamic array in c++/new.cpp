#include<bits/stdc++.h>
using namespace std;
int main(){
    //int x[5];
    int x;
    cin>>x;
    int *a= new int[x];
    for (int i = 0; i < x; i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
    }
    return 0;
    
}