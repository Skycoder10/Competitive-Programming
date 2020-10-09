//AUTHOR: phoenix_0010
//Jalpaiguri Government Engineering College




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
        ll dist[n+1],k;
        fr(i,2,n+1) dist[i]=inf;
        dist[1]=0;
        vector <tuple<ll,ll,ll> > v;
        fr(i,0,m) {
            cin>>a>>b>>c;
            v.pb({a,b,c});
        }
        fr(i,0,n-1) {
            fr(j,0,m) {
                a=get<0>(v[j]),b=get<1>(v[j]),c=get<2>(v[j]);
                //tie(a,b,c)=v[j];
                dist[b]=min(dist[b],dist[a]+c);
            }
        }
        bool f=0;
        fr(i,0,m) {
            a=get<0>(v[i]),b=get<1>(v[i]),c=get<2>(v[i]);
            f=(dist[b]>dist[a]+c);
            if(f) {
                cout<<"This graph contains negative cycle.\n";
                break;
            }
        }
        if(f) continue;
        fr(i,1,n+1) cout<<dist[i]<<' ';
    }
}




int main() {
    spdio;
	cazz();
	return 0;
}

