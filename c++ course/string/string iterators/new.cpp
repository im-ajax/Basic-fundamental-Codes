#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    //sorting using iterators funtions
    sort(s.begin(),s.end());
    cout<<s;
    
        // for (int i = 0; i < s.size(); i++)
        // {
        //     cout<<s[i]<<endl;
        // }

    //c++ 2011 er ager version e "string::iterator"
    //use kora lgto. ekhn new gula te lage na.
    //problem solving er khetre jodi compiler 2011
    //or past er ta select kori taile mair khabo
        // for (string::iterator it=s.begin();it<s.end(); it++)
        // {
        //     cout<<*it<<endl;
        // }
    //new ta. auto diye auto chine jay...
        // for (auto it=s.begin();it<s.end(); it++)
        // {
        //     cout<<*it<<endl;
        // }
    
    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;
    return 0;
}


