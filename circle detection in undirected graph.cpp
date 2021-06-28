#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5;


std::vector<int>adj[N+1];



bool bfs(int n,vector<bool>&vis){
    vis[n]=1;
    queue<pair<int,int>>q;
    q.push({n,-1});
    while(q.size()){
        auto c=q.front();
        q.pop();
        int node=c.first;
        int parent=c.second;
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push({it,node});
            }else{
                if(it!=parent){
                    return true;
                }
            }
        }
    }
    return false;
    
}



void cycle_detection_using_dfs(){
    int node,edge;
    cin>>node>>edge;
    for (int i = 0; i < edge; i++) {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<bool>vis(node+1,0);
    for (int i = 0; i < node ; i++) {
        if(!vis[i]){
            if(bfs(i,vis)){
                cout<<"Cycle Exist in this graph"<<"\n";
                return;
            }
        }
    }
    cout<<"No Cycle Exist in this graph"<<"\n";
    
    

}
 
 
 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T=1;
    //cin >>T;
    while(T--){
        cycle_detection_using_dfs();
    }
 
  return 0;
}
