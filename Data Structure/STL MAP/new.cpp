// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     //we can use any datatypes in map. map has zero as 
        // default value in all indexes
//     map<string,int> mp;
//     mp["tamim"]=2;
//     mp["ramim"]=5;
//     mp["shamim"]=50;
//     // for (auto it = mp.begin(); it !=mp.end(); it++)
//     // {
//     //     cout<<it->first<<" "<<it->second<<endl;
//     // }
//     if(mp.count("hamim"))
//         cout<<"ACHE"<<endl;
//     else cout<<"NAI"<<endl;
//     return 0;
// }

        // count words using map

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     stringstream ss(s);
//     string word;
//     map<string,int> mp;
//     while(ss>>word){
//         mp[word]++;
//     }
//     for (auto it= mp.begin(); it !=mp.end(); it++)
//     {
//         cout<<it->first<<" "<<it->second<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        map<string,int> mp;
        stringstream ss(s);
        string word;
        string maxword;
        int maxcnt=0;
        while (ss>>word)
        {
            mp[word]++;
                if(mp[word]>maxcnt){
                    maxcnt=mp[word];
                    maxword=word;
                }
        }
        cout<<maxword<<" "<<maxcnt<<endl;
    }
    return 0;
}


