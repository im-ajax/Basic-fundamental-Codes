#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    list<int> l;
    while(t--){
        int pos,val;
        cin>>pos>>val;
        if(pos==0) 
            l.push_front(val);
        else if(pos==1) 
            l.push_back(val);
        else if(pos==2){
            if(pos>=0 && val<l.size()){
                auto it=l.begin();
                for(int i=0;i<val;++i){
                    ++it;
                }
                l.erase(it);
            }
        }
        cout<<"L ->";
        for(int x:l)
            cout<<x<<" ";
        cout<<endl;

        cout<<"R ->";
        l.reverse();
        for(int y:l)
            cout<<y<<" ";
        cout<<endl;
    }
    return 0;
}