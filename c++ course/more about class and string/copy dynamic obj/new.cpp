#include <bits/stdc++.h>
using namespace std;
    class Cricketer {
    public:
        string country;
        int jersey;
        
        Cricketer(string c,int j) {
            this->country=c;
            this->jersey=j;
        }
    };
int main(){
    Cricketer *dhoni=new Cricketer("India",233);
    Cricketer *kohli=new Cricketer("Bangladesh",100);
    // kohli->country=dhoni->country;
    // kohli->jersey=dhoni->jersey;
    // delete dhoni;
    *kohli=*dhoni;
    delete dhoni;
    cout<<kohli->country<<" "<<kohli->jersey<<endl;
    return 0;
}