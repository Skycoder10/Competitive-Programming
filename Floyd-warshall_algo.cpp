//AUTHOR: phoenix_0010
//JALPAIGURI GOVERNMENT ENGINEERING COLLEGE




#include <bits/stdc++.h>
using namespace std;


#define spdio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pp pop_back()
#define pf push_front
#define ppf pop_front()
#define ff first
#define ss second
#define mp make_pair
#define fr(i,j,n) for(ll i=j; i<n; i++)
#define rfr(i,j,n) for(ll i=n-1; i>=j; i--)
#define pll pair<ll,ll>
#define plb pair<ll,bool>
#define psl pair<string,ll>
#define psb pair<string,bool>
#define srt(v) sort((v).begin(),(v).end())
#define ub(v,val) upper_bound((v).begin(),(v).end(),(val))-(v).begin()
#define lb(v,val) lower_bound((v).begin(),(v).end(),(val))-(v).begin()


typedef long double ld;
typedef long long int ll;




void cazz() {
    ll t=1,i=0,j,n;
    cin>>t;
    while(t--) {
        ll m,a,b,c;
        cin>>n>>m;
        ll vis[n+1]={},k;
        vector <pll> v[n+1];
        ll dist[n+1][n+1];
        fr(i,1,n+1) {
            fr(j,1,n+1) {
                if(i==j) dist[i][j]=0;
                else dist[i][j]=inf;
            }
        }
        fr(i,0,m) {
            cin>>a>>b>>c;
            dist[a][b]=c;
        }
        fr(i,1,n+1) {
            fr(j,1,n+1) {
                fr(k,1,n+1) {
                    dist[j][k]=min(dist[j][k],dist[j][i]+dist[i][k]);
                }
            }
        }
        fr(i,1,n+1) cout<<min(dist[1][i],dist[i][1])<<' ';
    }
}




int main() {
    spdio;
	cazz();
	return 0;
}

