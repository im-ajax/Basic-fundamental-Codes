/*what is the main difference between tree and cycle?
1. a cycle can be made in graph while tree is not
able to show cycle
2. multiple edges
3. multiple ways to reach parent or child node
4. edge direction */

        //adjacency matrix

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cin>>n>>e;
    int adj_mat[n][n];
        // keeping value 0
        // for (int i = 0; i < n; i++){
        //     for (int j = 0; j < n; j++){
        //         adj_mat[i][j]=0;
        //     }
        // }
        //     kar memory ,value, matrix er size 
        memset(adj_mat,      0,   sizeof(adj_mat));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if(i==j)
                    adj_mat[i][j]=1;
            }
        }
        
        //for printing adjacent matrix
        // for (int i = 0; i < n; i++){
        //     for (int j = 0; j < n; j++){
        //         cout<<adj_mat[i][j]<<endl;
        //     }
        // }

    for (int i = 0; i < e; i++){
        int a,b;
        cin>>a>>b;
        adj_mat[a][b]=1;
        //directed graph er khetre nicher 
        //line ta thakbe na 
        adj_mat[b][a]=1;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



//finalised code
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cin>>n>>e;
    int adj_mat[n][n];
    memset(adj_mat,0,sizeof(adj_mat));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i==j)
                adj_mat[i][j]=1;
    for (int i = 0; i < e; i++){
        int a,b;
        cin>>a>>b;
        adj_mat[a][b]=1;
        adj_mat[b][a]=1;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
