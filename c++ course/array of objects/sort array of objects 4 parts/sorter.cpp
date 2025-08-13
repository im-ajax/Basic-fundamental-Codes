#include <bits/stdc++.h>
using namespace std;
class Stu{
    public:
        string name;
        int id;
        int bangla_marks;
        int math_marks;
        int sum;
};
bool cmp(Stu l,Stu r) {
    if (l.sum==r.sum)
    {
        return l.id<r.id;
    }
    else{
        return l.sum<r.sum;
    }
}
int main(){
    int n;
    cin>>n;
    Stu a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].name>>a[i].id>>a[i].bangla_marks>>a[i].math_marks;
        a[i].sum=a[i].bangla_marks+a[i].math_marks;
    }
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].name<<" "<<a[i].id<<" "<<a[i].bangla_marks<<" "<<a[i].math_marks<<endl;
    }
    return 0;
}
































            //step 1
    // if (l.marks>r.marks)
    // {
    //     return true;
    // }
    // else if (l.marks<r.marks)
    // {
    //     return false;
    // }
    // else{
    //     if (l.roll<r.roll)
    //     {
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    // }
                
                //step 2
    // if (l.marks==r.marks)
    // {
    //     return l.roll<r.roll;
    // }
    // else{
    //     return l.marks>r.marks;
    // }
                
                //step 3
    // return(l.marks==r.marks)?l.roll<r.roll : l.marks<r.marks;