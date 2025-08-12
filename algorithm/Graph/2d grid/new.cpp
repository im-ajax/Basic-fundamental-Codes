// #include <bits/stdc++.h>
// using namespace std;
// char grid[105][105];
// bool vis[105][105];
// vector<pair<int,int>> d={{-1,0},{1,0},{0,-1},{0,1}};
// int n,m;
// bool valid(int i,int j){
//     if(i<0 || i>=n || j<0 || j>=m)
//         return false;
//     return true;
// }
// void dfs(int si,int sj){
//     cout<<si<<" "<<sj<<endl;
//     vis[si][sj]=true;
//     for (int i = 0; i < 4; i++){
//         int ci=si+d[i].first;
//         int cj=sj+d[i].second;
//             if(valid(ci,cj)==true && !vis[ci][cj]){
//                 dfs(ci,cj);
//             }
//     }
// }
// int main(){
//     cin>>n>>m;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             cin>>grid[i][j];
//         }
//     }
//     memset(vis,false,sizeof(vis));
//     int si,sj;
//     cin>>si>>sj;
//     dfs(si,sj);
//     return 0;
// }



// 2d grid on BFS

// #include <bits/stdc++.h>
// using namespace std;
// char grid[105][105];
// bool vis[105][105];
// vector<pair<int,int>> d={{-1,0},{1,0},{0,-1},{0,1}};
// int n,m;
// bool valid(int i,int j){
//     if(i<0||i>=n||j<0||j>=m)
//         return false;
//     return true;
// }
// void bfs(int si,int sj){
//     queue<pair<int,int>> q;
//     q.push({si,sj});
//     vis[si][sj]=true;
//     while(!q.empty()){
//         pair<int,int> par=q.front();
//         q.pop();
//         int par_i=par.first;
//         int par_j=par.second;
//         cout<<par_i<<" "<<par_j<<endl;
//         for(int i=0;i<4;i++){
//             int ci=par_i+d[i].first;
//             int cj=par_j+d[i].second;
//             if(valid(ci,cj)&&!vis[ci][cj]){
//                 q.push({ci,cj});
//                 vis[ci][cj]=true;
//             }
//         }
//     }
// }
// int main(){
//     cin>>n>>m;
//     for (int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin>>grid[i][j];
//         }
//     }
//     memset(vis,false,sizeof(vis));
//     int si,sj;
//     cin>>si>>sj;
//     bfs(si,sj);
//     return 0;
// }



//printing the distance

// #include <bits/stdc++.h>
// using namespace std;
// char grid[105][105];
// bool vis[105][105];
// int distance[105][105];
// vector<pair<int,int>> d={{-1,0},{1,0},{0,-1},{0,1}};
// int n,m;
// bool valid(int i,int j){
//     if(i<0||i>=n||j<0||j>=m)
//         return false;
//     return true;
// }
// void bfs(int si,int sj){
//     queue<pair<int,int>> q;
//     q.push({si,sj});
//     vis[si][sj]=true;
//     level[si][sj]=0;
//     while(!q.empty()){
//         pair<int,int> par=q.front();
//         q.pop();
//         int par_i=par.first;
//         int par_j=par.second;
//         for(int i=0;i<4;i++){
//             int ci=par_i+d[i].first;
//             int cj=par_j+d[i].second;
//             if(valid(ci,cj)&&!vis[ci][cj]){
//                 q.push({ci,cj});
//                 vis[ci][cj]=true;
//                 level[ci][cj]=level[par_i][par_j]+1;
//             }
//         }
//     }
// }
// int main(){
//     cin>>n>>m;
//     for (int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin>>grid[i][j];
//         }
//     }
//     memset(distance,-1,sizeof(distance));
//     memset(vis,false,sizeof(vis));
//     int si,sj,di,dj;
//     cin>>si>>sj>>di>>dj;
//     bfs(si,sj);
//     cout<<level[di][dj]<<" ";
//     return 0;
// }



//if there is a blockade in the way so 
// how we are suppossed to do it.

// #include <bits/stdc++.h>
// using namespace std;
// char grid[105][105];
// bool vis[105][105];
// int dis[105][105];
// vector<pair<int,int>> d={{-1,0},{1,0},{0,-1},{0,1}};
// int n,m;
// bool valid(int i,int j){
//     if(i<0||i>=n||j<0||j>=m)
//         return false;
//     return true;
// }
// void bfs(int si,int sj){
//     queue<pair<int,int>> q;
//     q.push({si,sj});
//     vis[si][sj]=true;
//     dis[si][sj]=0;
//     while(!q.empty()){
//         pair<int,int> par=q.front();
//         q.pop();
//         int par_i=par.first;
//         int par_j=par.second;
//         for(int i=0;i<4;i++){
//             int ci=par_i+d[i].first;
//             int cj=par_j+d[i].second;
//             if(valid(ci,cj)&&!vis[ci][cj]&&grid[ci][cj]=='.'){
//                 q.push({ci,cj});
//                 vis[ci][cj]=true;
//                 dis[ci][cj]=dis[par_i][par_j]+1;
//             }
//         }
//     }
// }
// int main(){
//     cin>>n>>m;
//     for (int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             cin>>grid[i][j];
//         }
//     }
//     memset(dis,-1,sizeof(dis));
//     memset(vis,false,sizeof(vis));
//     int si,sj,di,dj;
//     cin>>si>>sj>>di>>dj;
//     bfs(si,sj);
//     cout<<dis[di][dj]<<" ";
//     return 0;
// }


//number of components

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> adj_list[1005];
// bool vis[1005];
// void dfs(int src){
//     vis[src]=true;
//     for(auto child:adj_list[src]){
//         if(!vis[child])
//             dfs(child);
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
//     int cnt=0;
//     for (int i = 0; i < n; i++){
//         if(!vis[i]){
//             dfs(i);
//             cnt++;
//         }
//     }
//     cout<<cnt<<endl;
//     return 0;
// }

















