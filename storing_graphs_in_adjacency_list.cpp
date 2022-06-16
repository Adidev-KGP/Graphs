#include<bits/stdc++.h>
using namespace std;


signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//FASTIO
    
    int n,m;
    cin>>n>>m;
    
    vector<pair<int,int>> adj;
    for(int i=0;i<m;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    
    //int _t;cin>>_t;while(_t--)  //to run solve() t no. of times where t is no. of testcases
    
}
