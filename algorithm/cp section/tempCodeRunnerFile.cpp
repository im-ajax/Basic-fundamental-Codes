#include <bits/stdc++.h>
using namespace std;
int steps[1005][1005];
bool vis[1005][1005];
int n,m;
vector<pair<int,int>> direction={{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{2,-1},{2,1},{1,2}};
bool valid(int i,int j){
    if(i<0||i>=n||j<0||j>=m)
        return false;
    else return true;
}
void bfs(int si,int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]=0;
    steps[si][sj]=0;
    while(!q.empty()){
        pair<int,int> par=q.front();
        q.pop();
        int par_i=par.first;
        int par_j=par.second;
        for(int i=0;i<8;i++){
            int ci=par_i+direction[i].first;
            int cj=par_j+direction[i].second;
            if(valid(ci,cj)&&!vis[ci][cj]){
                q.push({ci,cj});
                vis[ci][cj]=true;
                steps[ci][cj]=steps[par_i][par_j]+1;
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        memset(vis,false,sizeof(vis));
        int si,sj,di,dj;
        cin>>si>>sj>>di>>dj;
        memset(steps,-1,sizeof(steps));
        bfs(si,sj);
        if(vis[di][dj])
            cout<<steps[di][dj]<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}