
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=100005;


std::vector<int>topo[1000];
std::vector<int> ;



void toposort(){
    int node,edge;
    cin>>node>>edge;
    for (int i = 0; i < edge; i++) {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
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
