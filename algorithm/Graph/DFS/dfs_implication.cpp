// #include <bits/stdc++.h>
// using namespace std;
// vector<int> adj_list[1005];
// bool vis[1005];
// void dfs(int src){
//     cout<<src<<" ";
//     vis[src]=true;
//     for(auto child:adj_list[src]){
//         if(!vis[child]){
//             dfs(child);
//         }
//     }
// }
// int main(){
//     int n,e;
//     cin>>n>>e;
//     while(e--){
//         int a,b;
//         cin>>a>>b;
//         adj_list[a].push_back(b);
//         adj_list[b].push_back(a);
//     }
//     memset(vis,false,sizeof(vis));
//     dfs(0);
//     return 0;
// }


//bfs and dfs together

#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];
int parent[1005];
void dfs(int src){
    cout<<src<<" ";
    vis[src]=true;
    for(auto child:adj_list[src]){
        if(!vis[child]){
            dfs(child);
        }
    }
}
void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src]=true;
    level[src]=0;
    while(!q.empty()){
        int par=q.front();
        q.pop();
        for(auto child:adj_list[par]){
            if(!vis[child]){
                q.push(child);
                vis[child]=true;
                level[child]=level[par]+1;
                parent[child]=par;
            }
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));
    memset(level,-1,sizeof(level));
    int src,des;
    cin>>src>>des;
    bfs(src);
    vector<int> path;
    int node=des;
        while (node!=-1){
            path.push_back(node);
            node=parent[node];
        }   
    reverse(path.begin(),path.end());
        for(auto x:path){
            cout<<x<<" ";
        }
    return 0;
}


