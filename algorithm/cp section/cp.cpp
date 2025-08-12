#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n > 0) {
        cout << "Positive" << endl;
    }
    else if (n < 0) {
        cout << "Negative" << endl;
    }
    else {
        cout << "Zero" << endl;
    }
    
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,e;
//     cin>>n>>e;
//     int adj_mat[1005][1005];
//     memset(adj_mat,0,sizeof(adj_mat));
//     while (e--)
//     {
//         int a,b;
//         cin>>a>>b;
//         adj_mat[a][b]=1;
        
//     }
//     int q;
//     cin>>q; 
//     while (q--)
//     {
//         int c,d;
//         cin>>c>>d;
//         if(adj_mat[c][d]==1)
//             cout<<"YES"<<endl;
//         else if(c==d)
//             cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// vector<int> adj_list[10005];
// int main(){
//     int n,e;
//     cin>>n>>e;
//     while(e--){
//         int a,b;
//         cin>>a>>b;
//         adj_list[a].push_back(b);
//         adj_list[b].push_back(a);
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int x;
//         cin>>x;
//         vector<int> box;
//         if(adj_list[x].empty())
//             cout<<"-1";
//         else{
//             for(auto child:adj_list[x]){
//                 box.push_back(child);
//             }
//             sort(box.begin(),box.end(),greater<int>());
//             for(auto element:box){
//                 cout<<element<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//2d grid using dfs
// #include <bits/stdc++.h>
// using namespace std;
// int grid[10005][10005];
// bool vis[10005][10005];
// vector<pair<int,int>> d={{-1,0},{1,0},{0,-1},{0,1}};
// int n,m;
// bool valid(int i,int j){
//     if(i<0||i>=n||j>=m||j<0)
//         return false;
//     else return true;
// }
// void dfs(int si,int sj){
//     cout<<si<<" "<<sj<<endl;
//     vis[si][sj]=true;
//     for(int i=0;i<4;i++){
//         int ci=si+d[i].first;
//         int cj=sj+d[i].second;
//         if(valid(ci,cj) && !vis[ci][cj])
//             dfs(ci,cj);
//     }
// }
// int main(){
//     cin>>n>>m;
//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++)
//             cin>>grid[i][j];
//     int si,sj;
//     cin>>si>>sj;
//     memset(vis,false,sizeof(vis));
//     dfs(si,sj);
//     return 0;
// }
//2d grid using bfs

// #include <bits/stdc++.h>
// using namespace std;
// char grid[995][995];
// bool vis[995][995];
// int level[995][995];
// int n,m;
// int si,sj,di,dj;
// vector<pair<int,int>> d={{-1,0},{0,1},{0,-1},{1,0}};
// bool valid(int i,int j){
//     if(i<0||i>=n||j<0||j>=m)
//         return false;
//     else return true;
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
//             if(valid(ci,cj)&&!vis[ci][cj]&&grid[ci][cj]!='#'){
//                 q.push({ci,cj});
//                 vis[ci][cj]=true;
//                 level[ci][cj]=level[par_i][par_j]+1;
//             }
//         }
//     }
// }
// int main(){
//     cin>>n>>m;
//     memset(vis,false,sizeof(vis));
//     memset(level,-1,sizeof(level));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>grid[i][j];
//             if(grid[i][j]=='A')
//                 si=i,sj=j;
//             if(grid[i][j]=='B')
//                 di=i,dj=j;
//         }
//     }
//     bfs(si,sj);
//     if(level[di][dj]==-1)
//         cout<<"NO"<<endl;
//     else cout<<"YES"<<endl;
//     return 0;
// }



//no. of components.

// #include <bits/stdc++.h>
// using namespace std;
// int n,m;
// char grid[1000][1000];
// bool vis[1000][1000];
// vector <pair<int,int>> direction={{-1,0},{1,0},{0,-1},{0,1}};
// bool valid(int i,int j){
//     if(i<0||i>=n||j<0||j>=m)
//         return false;
//     else return true;
// }
// void dfs(int i,int j){
//     vis[i][j]=true;
//     for(int k=0;k<4;k++){
//         int ci=i+direction[k].first;
//         int cj=j+direction[k].second;
//         if(valid(ci,cj)&&!vis[ci][cj]&&grid[ci][cj]=='.'){
//             dfs(ci,cj);
//         }
//     }
// }
// int main(){
//     cin>>n>>m;
//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++)
//             cin>>grid[i][j];
//     memset(vis,false,sizeof(vis));
//     int cnt=0;
//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++)
//             if(grid[i][j]=='.'&&!vis[i][j]){
//                 dfs(i,j);
//                 cnt++;
//             }
//     cout<<cnt<<endl;
//     return 0;
// }

//count apartments 1
// #include <bits/stdc++.h>
// using namespace std;
// char grid[1000][1000];
// bool vis[1000][1000];
// vector<pair<int,int>> direction={{-1,0},{0,1},{0,-1},{1,0}};
// int n,m;
// int size;
// bool valid(int i,int j){
//     if(i<0||i>=n||j<0||j>=m)
//         return false;
//     else return true;
// }
// void dfs(int i,int j){
//     size++;
//     vis[i][j]=true;
//     for(int k=0;k<4;k++){
//         int ci=i+direction[k].first;
//         int cj=j+direction[k].second;
//         if(valid(ci,cj)&&!vis[ci][cj]&&grid[ci][cj]=='.'){
//             dfs(ci,cj);
//         }
//     }
// }
// int main(){
//     cin>>n>>m;
//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++)
//             cin>>grid[i][j];
//     memset(vis,false,sizeof(vis));
//     vector<int> apartments;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(!vis[i][j]&&grid[i][j]=='.'){
//                 size=0;
//                 dfs(i,j);
//                 apartments.push_back(size);
//             }
//         }
//     }
//     if(apartments.empty())
//         cout<<0<<endl;
//     else{
//         sort(apartments.begin(),apartments.end());
//         for(int i=0;i<apartments.size();i++){
//             cout<<apartments[i]<<" ";
//         }
//     }
//     cout<<endl;
//     return 0;
// }




//count apartments.
// #include<bits/stdc++.h>
// using namespace std;
// char grid[1000][1000];
// bool vis[1000][1000];
// vector<pair<int,int>> direction={{-1,0},{0,1},{0,-1},{1,0}};
// int n,m,dotcnt;
// bool valid(int i,int j){
//     if(i<0||i>=n||j<0||j>=m)
//         return false;
//     else return true;
// }
// void dfs(int si,int sj){
//     dotcnt++;
//     vis[si][sj]=true;
//     for(int i=0;i<4;i++){
//         int ci=si+direction[i].first;
//         int cj=sj+direction[i].second;
//         if(valid(ci,cj)&&!vis[ci][cj]&&grid[ci][cj]=='.')
//             dfs(ci,cj);
//     }
// }
// int main(){
//     cin>>n>>m;
//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++)
//             cin>>grid[i][j];
//     memset(vis,false,sizeof(vis));
//     vector<int> comp;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(!vis[i][j]&&grid[i][j]=='.'){
//                 dotcnt=0; 
//                 dfs(i,j);
//                 comp.push_back(dotcnt);
//             }
//         }
//     }
//     if(comp.empty())
//         cout<<-1<<endl;
//     else{
//         sort(comp.begin(),comp.end());
//         cout<<comp[0]<<endl;
//     }
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// bool vis[1005][1005];
// char grid[1005][1005];
// int n,e;
// vector<pair<int,int>> d={{-1,0},{0,1},{1,0},{0,-1}};
// bool valid(int i,int j){
//     if(i<0||i>=n||j<0||j>=e)
//         return false;
//     else return true;
// }
// void dfs(int si,int sj){
//     vis[si][sj]=true;
//     for(int i=0;i<4;i++){
//         int ci=si+d[i].first;
//         int cj=sj+d[i].second;
//         if(!vis[ci][cj]&&valid(ci,cj)&&grid[ci][cj]=='.')
//             dfs(ci,cj);
//     }
// }
// int main(){
//     cin>>n>>e;
//     for(int i=0;i<n;i++)
//         for(int j=0;j<e;j++)
//             cin>>grid[i][j];
//     memset(vis,false,sizeof(vis));
//     int si,sj,di,dj;
//     cin>>si>>sj>>di>>dj;
//     if(grid[si][sj]=='.'&&grid[di][dj]=='.')
//         dfs(si,sj);
//     if(vis[di][dj])    
//         cout<<"YES"<<endl;
//     else cout<<"NO"<<endl;
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// vector<pair<int,int>> d={{-1,0},{0,1},{1,0},{0,-1}};
// bool vis[1005][1005];
// char grid[1005][1005];
// int n,e,dotcnt;
// bool valid(int i,int j){
//     if(i<0||i>=n||j<0||j>=e)
//         return false;
//     else return true;
// }
// void dfs(int si,int sj){
//     dotcnt++;
//     vis[si][sj]=true;
//     for(int i=0;i<4;i++){
//         int ci=si+d[i].first;
//         int cj=sj+d[i].second;
//         if(valid(ci,cj)&&!vis[ci][cj]&&grid[ci][cj]=='.')
//             dfs(ci,cj);
//     }
// }
// int main(){
//     cin>>n>>e;
//     for(int i=0;i<n;i++)
//         for(int j=0;j<e;j++)
//             cin>>grid[i][j];
//     memset(vis,false,sizeof(vis));
//     vector<int> dotbox;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<e;j++){
//             if(!vis[i][j]&&grid[i][j]=='.'){
//                 dotcnt=0;
//                 dfs(i,j);
//                 dotbox.push_back(dotcnt);
//             }
//         }
//     }
//     if(dotbox.empty())
//         cout<<"-1"<<endl;
//     else{
//         sort(dotbox.begin(),dotbox.end());
//         cout<<dotbox[0]<<endl;
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int n,m;
// bool vis[105][105];
// int level[105][105];
// vector<pair<int,int>> direction={{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{2,-1},{2,1},{1,2}};
// bool valid(int i,int j){
//     if(i<0||i>=n||j<0||j>=m)
//         return false;
//     else return true;
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
//         for(int i=0;i<8;i++){
//             int ci=par_i+direction[i].first;
//             int cj=par_j+direction[i].second;
//             if(valid(ci,cj)&&!vis[ci][cj]){
//                 q.push({ci,cj});
//                 vis[ci][cj]=true;
//                 level[ci][cj]=level[par_i][par_j]+1;
//             }
//         }
//     }
// }
// int main(){
//     int t;cin>>t;
//     while(t--){
//         cin >> n >> m;
//         memset(vis,false,sizeof(vis));
//         memset(level,-1,sizeof(level));
//         int si, sj, di, dj;
//         cin >> si >> sj >> di >> dj;
//         bfs(si, sj);
//         if(vis[di][dj])
//             cout<<level[di][dj]<<endl;
//         else cout<<"-1"<<endl;
//     }    
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// char grid[995][995];
// bool vis[995][995];
// int parent[995][995];
// int n,m;
// int si,sj,di,dj;
// vector<pair<int,int>> d={{-1,0},{0,1},{0,-1},{1,0}};
// bool valid(int i,int j){
//     if(i<0||i>=n||j<0||j>=m)
//         return false;
//     else return true;
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
//         for(int i=0;i<4;i++){
//             int ci=par_i+d[i].first;
//             int cj=par_j+d[i].second;
//             if(valid(ci,cj)&&!vis[ci][cj]&&grid[ci][cj]=='.'){
//                 q.push({ci,cj});
//                 vis[ci][cj]=true;
//                 grid[ci][cj]='X';
//             }
//         }
//     }
// }
// int main(){
//     cin>>n>>m;
//     memset(vis,false,sizeof(vis));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>grid[i][j];
//             if(grid[i][j]=='R'){
//                 si=i;
//                 sj=j;
//             }
//             if(grid[i][j]=='D'){
//                 di=i;
//                 dj=j;
//             }
//         }
//     }
//     bfs(si,sj);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<grid[i][j];
//         }
//         cout<<endl;
//     }    
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// int n,m;
// bool vis[105][105];
// int level[105][105];
// vector<pair<int,int>> knight={{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{2,-1},{2,1},{1,2}};
// vector<pair<int,int>> boat={{-1,0},{1,0},{0,-1},{0,1}};
// vector<pair<int,int>> diagonals={{-1,-1},{-1,1},{1,-1},{1,1}};
// vector<pair<int,int>> soldier={{-1,0}};
// vector<pair<int,int>> king={{-1,0},{0,1},{0,-1},{1,0}};
// vector<pair<int,int>> queen={{-1,-1},{-1,1},{1,-1},{1,1},{-1,0},{1,0},{0,-1},{0,1},};
// bool valid(int i,int j){
//     if(i<0||i>=n||j<0||j>=m)
//         return false;
//     else return true;
// }
// //bfs for king
// void bfs_for_king(int si,int sj){
//     queue<pair<int,int>> q;
//     q.push({si,sj});
//     vis[si][sj]=true;
//     level[si][sj]=0;
//     while(!q.empty()){
//         pair<int,int> par=q.front();
//         q.pop();
//         int par_i=par.first;
//         int par_j=par.second;
//         for(int i=0;i<8;i++){
//             int ci=par_i+king[i].first;
//             int cj=par_j+king[i].second;
//             if(valid(ci,cj)&&!vis[ci][cj]){
//                 q.push({ci,cj});
//                 vis[ci][cj]=true;
//                 level[ci][cj]=level[par_i][par_j]+1;
//             }
//         }
//     }
// }
// //bfs for knight
// void bfs_for_knight(int si,int sj){
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
//             int ci=par_i+knight[i].first;
//             int cj=par_j+knight[i].second;
//             if(valid(ci,cj)&&!vis[ci][cj]){
//                 q.push({ci,cj});
//                 vis[ci][cj]=true;
//                 level[ci][cj]=level[par_i][par_j]+1;
//             }
//         }
//     }
// }
// //bfs for boat
// void bfs_for_boat(int si,int sj){
//     queue<pair<int,int>> q;
//     q.push({si,sj});
//     vis[si][sj]=true;
//     level[si][sj]=0;
//     while(!q.empty()){
//         pair<int,int> par=q.front();
//         q.pop();
//         int par_i=par.first;
//         int par_j=par.second;
//         for(int i=0;i<2;i++){
//             int ci=par_i+boat[i].first;
//             int cj=par_j+boat[i].second;
//             if(valid(ci,cj)&&!vis[ci][cj]){
//                 q.push({ci,cj});
//                 vis[ci][cj]=true;
//                 level[ci][cj]=level[par_i][par_j]+1;
//             }
//         }
//     }
// }
// //bfs for diagonals
// void bfs_for_diagonals(int si,int sj){
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
//             int ci=par_i+diagonals[i].first;
//             int cj=par_j+diagonals[i].second;
//             if(valid(ci,cj)&&!vis[ci][cj]){
//                 q.push({ci,cj});
//                 vis[ci][cj]=true;
//                 level[ci][cj]=level[par_i][par_j]+1;
//             }
//         }
//     }
// }
// //bfs for soldiers
// void bfs_for_soldier(int si,int sj){
//     queue<pair<int,int>> q;
//     q.push({si,sj});
//     vis[si][sj]=true;
//     level[si][sj]=0;
//     while(!q.empty()){
//         pair<int,int> par=q.front();
//         q.pop();
//         int par_i=par.first;
//         int par_j=par.second;
//         for(int i=0;i<1;i++){
//             int ci=par_i+soldier[i].first;
//             int cj=par_j+soldier[i].second;
//             if(valid(ci,cj)&&!vis[ci][cj]){
//                 q.push({ci,cj});
//                 vis[ci][cj]=true;
//                 level[ci][cj]=level[par_i][par_j]+1;
//             }
//         }
//     }
// }
// //bfs for  queen
// void bfs_for_queen(int si,int sj){
//     queue<pair<int,int>> q;
//     q.push({si,sj});
//     vis[si][sj]=true;
//     level[si][sj]=0;
//     while(!q.empty()){
//         pair<int,int> par=q.front();
//         q.pop();
//         int par_i=par.first;
//         int par_j=par.second;
//         for(int i=0;i<8;i++){
//             int ci=par_i+queen[i].first;
//             int cj=par_j+queen[i].second;
//             if(valid(ci,cj)&&!vis[ci][cj]){
//                 q.push({ci,cj});
//                 vis[ci][cj]=true;
//                 level[ci][cj]=level[par_i][par_j]+1;
//             }
//         }
//     }
// }
// int main(){
//         string name;
//         getline(cin,name);
//         cin >> n >> m;
//         memset(vis,false,sizeof(vis));
//         memset(level,-1,sizeof(level));
//         int si, sj, di, dj;
//         cin >> si >> sj >> di >> dj;
//         if(name=="Boat") bfs_for_boat(si,sj);
//         else if(name=="Diagonal") bfs_for_diagonals(si,sj);
//         else if(name=="Soldier") bfs_for_soldier(si,sj);
//         else if(name=="Queen") bfs_for_queen(si,sj);
//         else if(name=="King") bfs_for_king(si,sj);
//         else if(name=="Knight") bfs_for_knight(si,sj);
//         if(vis[di][dj])
//             cout<<level[di][dj]<<endl;
//         else cout<<"-1"<<endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int n,m;
// vector<pair<int,int>> direction={{0,1},{0,-1},{-1,0},{1,0}};
// bool vis[1005][1005];
// bool valid(int i,int j){
//     if(i<0||i>=n||j<0||j>=m)
//         return false;
//     else return true;
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
//         for(int i=0;i<4;i++){
//             int ci=par_i+direction[i].first;
//             int ci=par_j+direction[i].second;
//             if(valid(ci,cj)&&!vis[ci][cj]&&grid[ci][cj]=='.'){
                
//             }
//         }
//     }
// }
// int main(){
//     cin>>n>>m;

//     return 0;
// }





// ... existing code ...