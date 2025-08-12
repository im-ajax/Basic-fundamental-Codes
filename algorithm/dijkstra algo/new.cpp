// dijkstra by chatgpt

// #include <bits/stdc++.h>
// using namespace std;
// int INF=1e9;
// void dijkstra(int start,vector<vector<pair<int,int>>>&graph,vector<int> &dist){
//     int n=graph.size();
//     dist.assign(n,INF);
//     dist[start]=0;
//     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//     pq.push(make_pair(0,start));
//     while(!pq.empty()){
//         int currDist=pq.top().first;
//         int u=pq.top().second;
//         pq.pop();
//         if(currDist>dist[u])
//             continue;
//         for(int i=0;i<graph[u].size();i++){
//             int v=graph[u][i].first;
//             int weight=graph[u][i].second;
//             if(dist[u]+weight<dist[v]){
//                 dist[v]=dist[u]=weight;
//                 pq.push(make_pair(dist[v],v));
//             }
//         }
//     }
// }
// int main(){
//     int nodes,edges;
//     cin>>nodes>>edges;
//     vector<vector<pair<int,int>>> graph(nodes);
//     for(int i=0;i<nodes;i++){
//         int u,v,w;
//         cin>>u>>v>>w;
//         graph[u].push_back({v,w});
//     }
//     int start;
//     cin>>start;
//     vector<int> dist;
//     dijkstra(start,graph,dist);
//     for(int i=0;i<nodes;i++){
//         cout<<"To Node"<<i<<":"<<endl;
//             if(dist[i]==INF)
//                 cout<<"unreachable"<<endl;
//             else cout<<dist[i];
//         cout<<"\n";
//     }
//     return 0;
// }

//dijkstra by phitron
// #include <bits/stdc++.h>
// using namespace std;
// vector<pair<int,int>> adj_list[105];
// int dis[105];
// void dijkstra(int src){
//     queue<pair<int,int>> q;
//     q.push({src,0});
//     dis[src]=0;
//     while(!q.empty()){
//         pair<int,int> par=q.front();
//         q.pop();
//         int par_node=par.first;
//         int par_dis=par.second;
//         for(auto child:adj_list[par_node]){
//             int child_node=child.first;
//             int child_dis=child.second;
//             if(par_dis+child_dis<dis[child_node]){
//                 dis[child_node]=par_dis+child_dis;
//                 q.push({child_node,dis[child_node]});
//             }
//         }
//     }
// }
// int main(){
//     int n,e;
//     cin>>n>>e;
//     while(e--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         adj_list[a].push_back({b,c});
//         adj_list[b].push_back({a,c});
//     }
//     for (int i = 0; i < n; i++)
//         dis[i]=INT_MAX;
//     dijkstra(0);
//     for (int i = 0; i < n; i++)
//         cout<<i<<" "<<dis[i]<<endl;
//     return 0;
// }






//dijkstra using priority queue
#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adj_list[105];
int dis[105];
void dijkstra(int src){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,src});
    dis[src]=0;
    while(!pq.empty()){
        pair<int,int> par=pq.top();
        pq.pop();
        int par_node=par.second;
        int par_dis=par.first;
        for(auto child:adj_list[par_node]){
            int child_node=child.first;
            int child_dis=child.second;
            if(child_dis+par_dis<dis[child_node]){
                dis[child_node]=child_dis+par_dis;
                pq.push({dis[child_node],child_node});
            }
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b,c;
        cin>>a>>b>>c;
        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
    }
    for(int i=0;i<n;i++)
        dis[i]=INT_MAX;
    dijkstra(0);
    for(int i=0;i<n;i++)
        cout<<i<<" "<<"->"<<" "<<dis[i]<<endl;
    return 0;
}








