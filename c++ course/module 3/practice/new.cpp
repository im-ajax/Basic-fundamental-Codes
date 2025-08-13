#include <bits/stdc++.h>
using namespace std;
// int* sort_it(int n){
//     int *a=new int[n];
//     for (int i = 0; i < n; i++)
//     {
//        cin>>a[i];
//     }
//     sort(a,a+n,greater<int>());
//     return a;
// }
// int main(){
//     int n;
//     cin>>n;
//     int* x=sort_it(n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<x[i]<<" ";
//     }
//     delete x;
//     return 0;
// }


// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }
//     sort(a,a+n);
//         for (int i = 0; i < n; i++)
//         {
//             cout<<a[i]<<" ";
//         }
//     int b[n];
//         for (int i = 0; i < n; i++)
//         {
//             b[i]=a[i];
//         }
//     printf("\n");
//     sort(b,b+n,greater<int>());
//         for (int i = 0; i < n; i++)
//         {
//             cout<<b[i]<<" ";
//         }
//     return 0;
// }


// class Student{
//     public:
//     int rl;
//     char n;
//     char s;
//     int m;
// };
// int main(){
//     int rl,m;
//     char n(100),s(100);
//     cin.getline(n,100);
//     cin>>rl>>s>>m;
//     return 0;
// }


// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     int sum;
//     cin>>sum;
//     int flag=0;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
    
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = i+1; j < n; j++)
//     //     {
//     //         for (int k = j+1; k < n; k++)
//     //         {
//     //             /* code */
//     //         }
            
//     //     }
        
//     // }
    
//     return 0;
// }




// int main()
// {
//     char s[100005];
//     while (cin>>s)
//     {   
//         for (int i = 0; i < strlen(s); i++)
//         {
//             if (s[i]!=' ')
//             {
//                 sort(s,s+strlen(s));
//                 cout<<s[i];
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
// int main(){
// int t;
// cin>>t;
// int flag=0;
//     for (int x = 0; x < t; x++)
//     {
//         int n,sum;
//         cin>>n>>sum;
//         int a[n];
//             for (int i = 0; i < n; i++)
//             {
//                 cin>>a[i];
//             }   
//             for (int x = 0; x < t; x++)
//     {
//             for (int i = 0; i < n; i++)
//             {   
//             for (int j = i+1; j < n; j++)
//             {
//                 for (int k = j+1; k < n; k++)
//                 {
//                     if (a[i]+a[j]+a[k]==sum)
//                     {
//                         flag=1;
//                     }
//                 }
//             }
//         }
//         if(flag==1)
//         {
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
//     }
//     return 0;
// }


// int main(){
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin>>n;
//         int a[n];
//         int sum;
//         cin>>sum;
//         for (int j = 0; j < n; j++)
//         {
//             cin>>a[j];
//         }
//         int flag=0;
//         for (int j = 0; j < n; j++)
//         {
//             for (int k = j+1; k < n; k++)
//             {
//                 for (int l=k+1; l < n; l++)
//                 {
//                     if (a[j]+a[k]+a[l]==sum)
//                     {
//                         flag=1;
//                     }   
//                 }   
//             }
//         }
//         if(flag==1){
//             cout<<"YES";
//         }
//         else{
//             cout<<"NO";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int T; // Number of test cases
//     cin >> T;

//     for (int t = 0; t < T; t++) {
//         int N, S;
//         cin >> N >> S; // Size of array and target sum
//         int A[N];
        
//         // Input the array
//         for (int i = 0; i < N; i++) {
//             cin >> A[i];
//         }

//         int flag = 0; // Flag to indicate if a triplet is found

//         // Check all combinations of three distinct elements
//         for (int i = 0; i < N - 2; i++) {
//             for (int j = i + 1; j < N - 1; j++) {
//                 for (int k = j + 1; k < N; k++) {
//                     if (A[i] + A[j] + A[k] == S) {
//                         flag = 1; // Set flag if triplet is found
//                         break;
//                     }
//                 }
//                 if (flag == 1) break; // Exit the middle loop
//             }
//             if (flag == 1) break; // Exit the outer loop
//         }

//         // Output result for the current test case
//         if (flag == 1)
//             cout << "YES" << endl;
//         else
//             cout << "NO" << endl;
//     }

//     return 0;
// }

            // pending......
// int main(){
//     char s[100005];
    
//     while(cin.getline(s,100005))
//     {
//         int len=strlen(s);
//         sort(s,s+len);
//         for (int i = 0; i < len; i++)
//         {
//             if (s[i]!=' ')
//             {
//                 cout<<s[i];
//             }
//         }
//     cout<<endl;
//     }
//     return 0;
// }

// class car{
//     public:
//     char color[100];
//     int power;
//     int weight;
// };
// int main(){
//     car tesla;
//     car abc;
//     cin>>tesla.color>>tesla.power>>tesla.weight;
//     cout<<tesla.color<<" "<<tesla.power<<" "<<tesla.weight<<endl;
//     return 0;
// }

// class Student{
//     public:
//     char n[100];
//     int r;
//     int m;
// };
// int main(){
//     Student a;
//     cin.getline(a.n,100);
//     cin>>a.r>>a.m;
//     cout<<a.n<<" "<<a.r<<" "<<a.m<<endl;
//     return 0;
// }




// int main(){
//     int t;
//     cin>>t;
//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         cin>>n;
//         int a[n];
//         for (int j = 0; j < n; j++)
//         {
//             cin>>a[i];
//         }
//         int sum=0;
//         for (int j = 0; j < n; j++)
//         {
//             sum+=a[i];
//             cout<<sum<<endl;
//         }
//     }
    
//     return 0;
// }







                    //mine..........
class Obj{
    public:
    int c;
    char n[100];
    char s;
    int m;
};
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        Obj a,b,c;
        cin>>a.c>>a.n>>a.s>>a.m;
        cin>>b.c>>b.n>>b.s>>b.m;
        cin>>c.c>>c.n>>c.s>>c.m;
        if(a.m>b.m&&a.m>c.m){
            cout<<a.c<<" "<<a.n<<" "<<a.s<<" "<<a.m<<endl;
        }
        else if (b.m>a.m&&b.m>c.m){
            cout<<b.c<<" "<<b.n<<" "<<b.s<<" "<<b.m<<endl;
        }
        else if(c.m>a.m&&c.m>b.m){
            cout<<c.c<<" "<<c.n<<" "<<c.s<<" "<<c.m<<endl;
        }
        else if (a.m==b.m&&b.m==c.m&&c.m==a.m){   
            if (a.c<b.c&&a.c<c.c){
                cout<<a.c<<" "<<a.n<<" "<<a.s<<" "<<a.m<<endl;
            }
            else if (b.c<c.c&&b.c<a.c){
                cout<<b.c<<" "<<b.n<<" "<<b.s<<" "<<b.m<<endl;
            }
            else if (c.c<a.c&&c.c<b.c){
                cout<<c.c<<" "<<c.n<<" "<<c.s<<" "<<c.m<<endl;
            }
        }
        else if (a.m==b.m){
            if (a.c<b.c){
                cout<<a.c<<" "<<a.n<<" "<<a.s<<" "<<a.m<<endl;
            }
            else{
                cout<<b.c<<" "<<b.n<<" "<<b.s<<" "<<b.m<<endl;
            }
        }
        else if (b.m==c.m){
            if (b.c<c.c){
                cout<<b.c<<" "<<b.n<<" "<<b.s<<" "<<b.m<<endl;
            }
            else{
                cout<<c.c<<" "<<c.n<<" "<<c.s<<" "<<c.m<<endl;
            }
        }
        else if (a.m==c.m){
            if (c.c<a.c){
                cout<<c.c<<" "<<c.n<<" "<<c.s<<" "<<c.m<<endl;
            }
            else{
                cout<<a.c<<" "<<a.n<<" "<<a.s<<" "<<a.m<<endl;
            }
        }
    }
    return 0;
}


