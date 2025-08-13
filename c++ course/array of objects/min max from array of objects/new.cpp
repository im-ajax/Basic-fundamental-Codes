#include <bits/stdc++.h>
using namespace std;
class Stu{
   public:
   string name;
   int roll;
   int marks;
};
int main(){
    int n;
    cin>>n;
    Stu a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    Stu mn;
    mn.marks=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks>mn.marks)
        {
            mn=a[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    return 0;
}



