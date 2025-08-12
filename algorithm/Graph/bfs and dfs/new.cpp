// // adjacency matrix
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,e;
//     cin>>n>>e;
//     int adj_mat[n][n];
//     memset(adj_mat,0,sizeof(adj_mat));
//     for (int i = 0; i < n; i++){
//             for(int j=0;j<n;j++)
//                 if(i==j)
//                     adj_mat[i][j]=1;
//     }
    
//     for (int i = 0; i < e; i++){
//         int a,b;
//         cin>>a>>b;
//         adj_mat[a][b]=1;
//         adj_mat[b][a]=1;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++)
//             cout<<adj_mat[i][j]<<" ";
//         cout<<endl;
//     }
//     return 0;
// }


//adjacency list
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,e;
//     cin>>n>>e;
//     vector<int> adj_list[n];
//     while (e--){
//         int a,b;
//         cin>>a>>b;
//         adj_list[a].push_back(b);
//         adj_list[b].push_back(a);
//     }
//     for (int i = 0; i < n; i++){
//         cout<<i<<" -> ";
//         for(auto x:adj_list[i])
//             cout<<x<<" ";
//         cout<<endl;
//     }
//     return 0;
// }

//edge list
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,e;
//     cin>>n>>e;
//     vector<pair<int,int>> edge_list;
//     while (e--){
//         int a,b;
//         cin>>a>>b;
//         edge_list.push_back({a,b});
//     }
//     for(auto val:edge_list){
//         cout<<val.first<<" "<<val.second<<endl;
//     }
//     return 0;
// }





// using bfs
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> adj_list[10005];
// bool vis[10005];
// void bfs(int src){
//     queue<int> q;
//     q.push(src);
//     vis[src]=true;
//     while (!q.empty()){
//         int par=q.front();
//         q.pop();
//         cout<<par<<" ";
//         for(auto child:adj_list[par]){
//             if(vis[child]==false){
//                 q.push(child);
//                 vis[child]=true;
//             }
//         }
//     }
// }   
// int main(){
//     int n,e;
//     cin>>n>>e;
//     while (e--){
//         int a,b;
//         cin>>a>>b;
//         adj_list[a].push_back(b);
//         adj_list[b].push_back(a);
//     }
//     memset(vis,false,sizeof(vis));
//     bfs(0);
//     return 0;
// }


//checking if a node is visited or not?

//while deleting a endge. we have to
//reduce the no. of edges in input also
// in the first line
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> adj_list[1005];
// bool vis[1005];
// void bfs(int src){
//     queue<int> q;
//     q.push(src);
//     vis[src]=true;
//     while (!q.empty())
//     {
//         int par=q.front();
//         q.pop();
//         for(int child:adj_list[par]){
//             if(!vis[child]){
//                 q.push(child);
//                 vis[child]=true;
//             }
//         }
//     } 
// }
// int main(){
//     int n,e;cin>>n>>e;
//     while (e--)
//     {
//         int a,b;
//         cin>>a>>b;
//         adj_list[a].push_back(b);
//         adj_list[b].push_back(a);
//     }
//     memset(vis,false,sizeof(vis));
//     int src,des;
//     cin>>src>>des;
//     bfs(src);
//     if(vis[des]) cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
//     return 0;
// }


//single source shortest distance


#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
int level[1005];
int parent[1005];
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
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));
    int src,des;
    cin>>src>>des;
    bfs(src);
    int node=des;
    while (node!=-1)
    {
        cout<<node<<" ";
        node=parent[node];
    }
    
    return 0;
}


//path printing practice

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> adj_list[1005];
// bool vis[1005];
// int level[1005];
// int parent[1005];
// void bfs(int src){
//     queue<int> q;
//     q.push(src);
//     vis[src]=true;
//     level[src]=0;
//     while(!q.empty()){
//         int par=q.front();
//         q.pop();
//         for(auto child:adj_list[par]){
//             if(!vis[child]){
//                 q.push(child);
//                 vis[child]=true;
//                 level[child]=level[par]+1;
//                 parent[child]=par;
//             }
//         }
//     }
// }
// int main(){
//     int n,e;
//     cin>>n>>e;
//     while (e--){
//         int a,b;
//         cin>>a>>b;
//         adj_list[a].push_back(b);
//         adj_list[b].push_back(b);
//     }
//     memset(vis,false,sizeof(vis));
//     memset(level,-1,sizeof(level));
//     memset(parent,-1,sizeof(parent));
//     int src,des;
//     cin>>src>>des;
//     bfs(src);
//     vector<int> path;
//     int node=des;
//     while (node!=-1){
//         path.push_back(node);
//         node=parent[node];
//     }
//     reverse(path.begin(),path.end());
//     for(auto x:path){
//         cout<<x<<" ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
int parent[1005];
bool vis[1005];
int level[1005];
void bfs(int src){
    queue<int> q;
    q.push(src);
    level[src]=0;
    vis[src]=true;
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
    while(node!=-1){
        path.push_back(node);
        node=parent[node];
    }
    reverse(path.begin(),path.end());
    for(int x:path){
        cout<<x<<" ";
    }
    return 0;
}
