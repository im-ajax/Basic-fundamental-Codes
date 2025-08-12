// #include <bits/stdc++.h>
// using namespace std;
// class Edge{
//     public:
//         int initial_vertex,terminal_vertex,distance;
//         Edge(int initial_vertex,int terminal_vertex,int distance){
//             this->initial_vertex=initial_vertex;
//             this->terminal_vertex=terminal_vertex;
//             this->distance=distance;
//         }
// };
// vector<Edge> edge_list;
// int dis[10005]; 
// void bellman_ford(){
//     for(Edge x: edge_list){
//         int in_vertex,ter_vertex,dist;
//         in_vertex=x.initial_vertex;
//         ter_vertex=x.terminal_vertex;
//         dist=x.distance;
//         if(dis[in_vertex]!=INT_MAX && dis[in_vertex]+dist<dis[ter_vertex]){
//             dis[ter_vertex]=dis[in_vertex]+dist;
//         }
//     }
// }
// int main(){
//     int vertex,edges;
//     cin>>vertex>>edges;
//     for(int i=0;i<edges;i++){
//         int initial_vertex,terminal_vertex,distance;
//         cin>>initial_vertex>>terminal_vertex>>distance;
//         edge_list.push_back(Edge(initial_vertex,terminal_vertex,distance));
        
//         // for undirected graph we have to use this ase input
//         //edge_list.push_back(Edge(terminal_vertex,initial_vertex,distance));
//     }
//     for(int i=0;i<vertex;i++)
//         dis[i]=INT_MAX;
//     dis[0]=0;
//     bellman_ford();
//     for(int i=0;i<vertex;i++)
//             cout<<i<<" -> "<<dis[i]<<endl;
//     return 0;
// }

//detect negative cycles in bellman ford
// #include <bits/stdc++.h>
// using namespace std;
// class Edge{
//     public:
//     int initial_vertex,terminal_vertex,distance;
//     Edge(int initial_vertex,int terminal_vertex,int distance){
//         this->initial_vertex=initial_vertex;
//         this->terminal_vertex=terminal_vertex;
//         this->distance=distance;
//     }
// };
// int dis[10005];
// vector<Edge> edge_list;
// int vertices,edges;
// bool cycle;
// void bellman_ford(){
//     for(int i=0;i<vertices-1;i++){
//         for(auto ed:edge_list){
//             int in_ver=ed.initial_vertex;
//             int ter_ver=ed.terminal_vertex;
//             int dist=ed.distance;
//             if(dis[in_ver]!=INT_MAX && dis[in_ver]+dist<dis[ter_ver]){
//                 dis[ter_ver]=dis[in_ver]+dist;            
//             }
//         }
//     }
//     for(auto ed:edge_list){
//         int in_ver=ed.initial_vertex;
//         int ter_ver=ed.terminal_vertex;
//         int dist=ed.distance;
//         if(dis[in_ver]!=INT_MAX && dis[in_ver]+dist<dis[ter_ver]){
//             cycle=true;
//             break;
//         }
//     }
//     if(cycle) cout<<"Negative weighted cycle detected"<<endl;
//     else{
//         for(int i=0;i<vertices;i++)
//             cout<<i<<" -> "<<dis[i]<<endl;
//     }
// }
// int main(){
//     cin>>vertices>>edges;
//     while(edges--){
//         int initial_vertex,terminal_vertex,distance;
//         cin>>initial_vertex>>terminal_vertex>>distance;
//         edge_list.push_back(Edge(initial_vertex,terminal_vertex,distance));
        
//         // for undirected graphs
//         //edge_list.push_back(Edge(terminal_vertex,initial_vertex,distance));
//     }
//     for(int i=0;i<vertices;i++)
//         dis[i]=INT_MAX;
//     dis[0]=0;
//     bellman_ford();
//     return 0;
// }


// for directed graph
// #include <bits/stdc++.h>
// using namespace std;
// class edge{
//     public: 
//         int a,b,c;
//         edge(int a,int b,int c){
//             this->a=a;
//             this->b=b;
//             this->c=c;
//         }
//     };
// int dis[1005];
// int n,e;
// vector<edge> edge_list;
// void bellman_ford(){
//     jehetu ekhane amra source node er distance jani,
//      so amdr n-1 numbers of node er shortest distance lgbe tai amra ekhane n-1 pjnto loop ta chalaisi
//     for(int i=0;i<n-1;i++){
//         for(auto ed:edge_list){
//             int a,b,c;
//             a=ed.a;
//             b=ed.b;
//             c=ed.c;
//             if(dis[a]!=INT_MAX && dis[a]+c<dis[b])
//                 dis[b]=dis[a]+c;
//         }
//     }
// }
// int main(){
//     cin>>n>>e;
//     while(e--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         edge_list.push_back(edge(a,b,c));
//     }
//     for(int i=0;i<n;i++)
//         dis[i]=INT_MAX;
//     dis[0]=0;
//     bellman_ford();
//     for(int i=0;i<n;i++)
//         cout<<i<<"->"<<dis[i]<<endl;
//     return 0;
// }


// for undirected graph
// #include <bits/stdc++.h>
// using namespace std;
// class edge{
//     public: 
//         int a,b,c;
//     edge(int a,int b,int c){
//         this->a=a;
//         this->b=b;
//         this->c=c;
//     }
// };
// int dis[1005];
// int n,e;
// vector<edge> edge_list;
// void bellman_ford(){
//     for(int i=0;i<n-1;i++){
//         for(auto ed:edge_list){
//             int a,b,c;
//             a=ed.a;
//             b=ed.b;
//             c=ed.c;
//             if(dis[a]!=INT_MAX && dis[a]+c<dis[b])
//                 dis[b]=dis[a]+c;
//         }
//     }
// }
// int main(){
//     cin>>n>>e;
//     while(e--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         edge_list.push_back(edge(a,b,c));
//         edge_list.push_back(edge(b,a,c));
//     }
//     for(int i=0;i<n;i++)
//         dis[i]=INT_MAX;
//     dis[0]=0;
//     bellman_ford();
//     for(int i=0;i<n;i++)
//         cout<<i<<"->"<<dis[i]<<endl;
//     return 0;
// }



//detect negative weighted cycle using bellman ford in directed graph

// #include<bits/stdc++.h>
// using namespace std;
// class edge{
//     public: 
//         int a,b,c;
//     edge(int a,int b,int c){
//         this->a=a;
//         this->b=b;
//         this->c=c;
//     }
// };
// int dis[1005];
// int n,e;
// vector<edge> edge_list;
// void bellman_ford(){
//     for(int i=0;i<n-1;i++){
//         for(auto ed:edge_list){
//             int a,b,c;
//             a=ed.a;
//             b=ed.b;
//             c=ed.c;
//             if(dis[a]!=INT_MAX && dis[a]+c<dis[b])
//                 dis[b]=dis[a]+c;
//         }
//     }
//     bool cycle=false;
//     for(auto ed:edge_list){
//         int a,b,c;
//         a=ed.a;
//         b=ed.b;
//         c=ed.c;
//         if(dis[a]!=INT_MAX && dis[a]+c<dis[b]){
//             cycle=true;
//             break;
//         }
//     }
//     if(cycle)
//         cout<<"Negative weighted cycle detected"<<endl;
//     else{
//         for(int i=0;i<n;i++)
//             cout<<i<<"->"<<dis[i]<<endl;
//     }
// }     
// int main(){
//     cin>>n>>e;
//     while(e--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         edge_list.push_back(edge(a,b,c));
//     }
//     for(int i=0;i<n;i++)
//         dis[i]=INT_MAX;
//     dis[0]=0;
//     bellman_ford();
//     return 0;
// }









// #include <bits/stdc++.h>
// using namespace std;
// class Edge{
//     public:
//     int initial_vertex,terminal_vertex,distance;
//     Edge(int initial_vertex,int terminal_vertex,int distance){
//         this->initial_vertex=initial_vertex;
//         this->terminal_vertex=terminal_vertex;
//         this->distance=distance;
//     }
// };
// int dis[10005];
// vector<Edge> edge_list;
// int vertices,edges;
// void bellman_ford(){
//     for(int i=0;i<vertices-1;i++){
//             for(auto ed:edge_list){
//             int in_vertex=ed.initial_vertex;
//             int ter_vertex=ed.terminal_vertex;
//             int dist=ed.distance;
//             if(dis[in_vertex]!=INT_MAX && dis[in_vertex]+dist<dis[ter_vertex])
//                 dis[ter_vertex]=dis[in_vertex]+dist;
//         }
//     }
// }
// int main(){
//     cin>>vertices>>edges;
//     while(edges--){
//         int initial_vertex,terminal_vertex,distance;
//         cin>>initial_vertex>>terminal_vertex>>distance;
//         edge_list.push_back(Edge(initial_vertex,terminal_vertex,distance));
//     }
//     for(int i=0;i<vertices;i++)
//         dis[i]=INT_MAX;
//     dis[0]=0;
//     bellman_ford();
//     for(int i=0;i<vertices;i++)
//         cout<<i<<" -> "<<dis[i]<<endl;
//     return 0;
// }















