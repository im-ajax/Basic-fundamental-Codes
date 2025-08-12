// cycle detection IN UNDIRECTED graph using BFS
// #include <bits/stdc++.h>
// using namespace std;
// bool vis[1005];
// vector<int> adj_list[1005];
// int parent[1005];
// bool cycle;
// void bfs(int src){
//     queue<int> q;
//     q.push(src);
//     vis[src]=true;
//     while(!q.empty()){
//         int par=q.front();
//         q.pop();
//         for(auto child:adj_list[par]){
//             if(vis[child]&& parent[par]!=child)
//                 cycle=false;
//             if(!vis[child]){
//                 q.push(child);
//                 vis[child]=true;
//                 parent[child]=par;
//                 bfs(child);
//             }
//         }
//     }
// }
// int main(){
//     int n,e;
//     cin>>n>>e;
//     while(e--){
//         int a,b;cin>>a>>b;
//         adj_list[a].push_back(b);
//         adj_list[b].push_back(a);
//     }
//     memset(vis,false,sizeof(vis));
//     memset(parent,-1,sizeof(parent));
//     cycle=false;
//     for(int i=0;i<n;i++){
//         if(!vis[i]){
//             bfs(i);
//         }
//     }
//     if(cycle) cout<<"Cycle detected"<<endl;
//     else cout<<"No cycle"<<endl;
//     return 0;
// }



// detect cycle in undirected graph using dfs
// #include <bits/stdc++.h>
// using namespace std;
// bool cycle;
// vector<int> adj_list[1005];
// int parent[1005];
// bool vis[1005];
// void dfs(int src){
//     vis[src]=true;
//     for(int child:adj_list[src]){
//         if(vis[child]&&parent[src]!=child)
//             cycle=true;
//         if(vis[child]==false){
//             parent[child]=src;
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
//     memset(parent,-1,sizeof(parent));
//     cycle=false;
//     for(int i=0;i<n;i++){
//         if(vis[i]==false){
//             dfs(i);
//         }
//     }
//     if(cycle==true) cout<<"Cycle detected"<<endl;
//     else cout<<"No Cycle"<<endl;
//     return 0;
// }


// //cycle detection using dfs in directed graph
// #include <bits/stdc++.h>
// using namespace std;
// bool cycle;
// vector<int> adj_list[1005];
// int path_visit[1005];
// bool vis[1005];
// void dfs(int src){
//     vis[src]=true;
//     for(int child:adj_list[src]){
//         if(vis[child]&&parent[src]!=child)
//             cycle=true;
//         if(vis[child]==false){
//             parent[child]=src;
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
//     }
//     memset(vis,false,sizeof(vis));
//     memset(parent,-1,sizeof(parent));
//     cycle=false;
//     for(int i=0;i<n;i++){
//         if(vis[i]==false){
//             dfs(i);
//         }
//     }
//     if(cycle==true) cout<<"Cycle detected"<<endl;
//     else cout<<"No Cycle"<<endl;
//     return 0;
// }


//cycle detection using dfs properly (directed graph)
// #include <bits/stdc++.h>
// using namespace std;
// vector<int> adj_list[1005];
// bool cycle;
// bool pathvis[1005];
// bool vis[1005];
// void dfs(int src){
//     vis[src]=true;
//     pathvis[src]=true;
//     for(auto child:adj_list[src]){
//         if(vis[child]&&pathvis[child])
//             cycle=true;
//         if(!vis[child])
//             dfs(child);
//     }
//     pathvis[src]=false;
// }
// int main(){
//     int n,e;
//     cin>>n>>e;
//     while(e--){
//         int a,b;
//         cin>>a>>b;
//         adj_list[a].push_back(b);
//     }
//     memset(vis,false,sizeof(vis));
//     memset(pathvis,false,sizeof(pathvis));
//     cycle = false;
//     for(int i=0;i<n;i++){
//         if(!vis[i]){
//             dfs(i);
//         }
//     }
//     if(cycle) cout<<"cycle detected"<<endl;
//     else cout<<"no cycle"<<endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// vector<int> adj_list[1005];
// bool cycle;
// bool pathvis[1005];
// bool vis[1005];
// void dfs(int src){
//     vis[src]=true;
//     pathvis[src]=true;
//     for(auto child:adj_list[src]){
//         if(vis[child]&&pathvis[child])
//             cycle=true;
//         if(!vis[child])
//             dfs(child);
//     }
//     pathvis[src]=false;
// }
// int main(){
//     int n,e;
//     cin>>n>>e;
//     while(e--){
//         int a,b;
//         cin>>a>>b;
//         adj_list[a].push_back(b);
//     }
//     memset(vis,false,sizeof(vis));
//     memset(pathvis,false,sizeof(pathvis));
//     cycle = false;
//     for(int i=0;i<n;i++){
//         if(!vis[i]){
//             dfs(i);
//         }
//     }
//     if(cycle) cout<<"cycle detected"<<endl;
//     else cout<<"no cycle"<<endl;
//     return 0;
// }





