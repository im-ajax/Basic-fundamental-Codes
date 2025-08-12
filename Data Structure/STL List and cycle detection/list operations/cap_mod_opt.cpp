// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int> l(10,3);
//     // for (auto i = l.begin(); i != l.end(); i++)
//     // {
//     //     cout<<*i<<endl;
//     // }
    
//     for (int val :l)
//     {
//         cout<<val<<endl;
//     }
    
//     return 0;
// }



        // capacity functions

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v={10,20,30};
//     list<int> l2(v.begin(),v.end());   
//     ///l2.clear();
//     cout<<l2.size()<<endl;
//     // if (l2.empty())
//     // {
//     //     cout<<"empty"<<endl;
//     // }
//     // else{
//     //     cout<<"not emp"<<endl;
//     // }
//     l2.resize(5,14);
//     for(int val:l2)
//     {
//        cout<<val<<endl; 
//     }
    
//     return 0;
// }


        //list modifieres

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int> l={10,20,30,40,50,60,70};
//     //list<int> l2={100,200};
//         //assign
//     // l2=l;
//     // l2.assign(l.begin(),l.end());

//         //pushback and front and popback
//     // l.push_back(40);
//     // l.push_front(100);
//     // l.pop_back();
//     // l.pop_front();

//         //accessing element
//     // cout<<*next(l.begin(),2);

//         //inserting and deleting values
//     //l.insert(next(l.begin(),2),l2.begin(),l2.end());
//     //l.erase(next(l.begin(),2),next(l.begin(),5));
        
//         //repalcing
//     //replace(l.begin(),l.end(),20,100);

//         //finding
//     // auto it=find(l.begin(),l.end(),200);
//     // if (it==l.end())
//     // {
//     //     cout<<"not found"<<endl;
//     // }
//     // else{cout<<"Found"<<endl;}
    
//     // for(int val:l)
//     // {
//     //     cout<<val<<endl;
//     // }
    
//     return 0;
// }

                //list operations

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int> l={20,30,10,50,30,60,60,10};
// 		//remove function usage
//     //l.remove(10);
//         //sorting
//     //l.sort(greater<int>());

//             //unique usage
//         //to use this function we have
//         //sort the list.
//     //l.unique();

//             //reversing
//     //l.reverse();
//     for(int val:l)
//     {
//         cout<<val<<endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> l={10,20,30,40,50};
            //element access
    // cout<<l.back()<<endl;
    // cout<<l.front()<<endl;
    // cout<<*next(l.begin(),2)<<endl;

            //list iterators
    cout<<l.front()<<endl;
    cout<<*l.begin()<<endl;
    cout<<l.back()<<endl;
    
    //l.end kora jabe na karon end thake
    //list er last index er porer addresse
    //cout<<l.end()<<endl;
    return 0;
}


        



