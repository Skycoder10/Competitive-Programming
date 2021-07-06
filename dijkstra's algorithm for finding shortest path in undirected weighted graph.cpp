#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=100005;


 
void solve(){
    int n,m;
    cin>>n>>m;
    std::vector<pair<int,int>>adj[n+1];
    for (int i = 0; i < m; i++) {
        int a,b,w;
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    vector<int>distance(n+1,1e9);
    int source;cin>>source;
    distance[source]=0;
    pq.push({0,source});
    while(pq.size()){
        auto c=pq.top();
        pq.pop();
        int dis_upto=c.first;
        int source_via=c.second;
        for(auto it:adj[source_via]){
            int next=it.first;
            int next_dis=it.second;
            if(distance[next]>distance[source_via]+next_dis){
                distance[next]=distance[source_via]+next_dis;
                pq.push({distance[next],next});
            }
        }
    }
    bool f=0;
    for(int i:distance){
        if(f) cout<<i<<" ";
        f=1;
    }
}
 
 
 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T=1;
    //cin >>T;
    while(T--){
        solve();
    }
 
  return 0;
}
