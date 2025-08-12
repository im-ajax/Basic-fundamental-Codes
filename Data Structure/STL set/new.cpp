// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t)
//     {
//         set<int> s;
//         int n;
//         cin >> n;
//         while (n--)
//         {
//             int val;
//             cin >> val;
//             s.insert(val);
//         }
//         for (auto it = s.begin(); it != s.end(); it++)
//         {
//             cout << *it << " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<" ";
        for (int i = 1; i < n; i++)
        {
            if(v[i]!=v[i-1])
                cout<<v[i]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}


// how to when to use iterator?
