#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
typedef long double   lld;
const ll mod=1e9+7;
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define print(a) for(auto i:a)cout<<i<<" ";cout<<endl;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(a) for(auto &i:a)cin>>i
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(x) ll((x.size()))
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int main(){
	int n;
	cin>>n;
	while(n--){
		int m,n;cin>>n>>m;
		int steps, diff,ans = 0;
		steps = min(m,n)-1;
		if(m ==1 && n == 1){
			cout<<0<<endl;
		}
		else if(m ==1){
			if(n>2){
				cout<<-1<<endl;
			}
			else{
				 cout<<1<<endl;
			}

		}
		else if( n ==1){
			if(m>2){
				cout<<-1<<endl;
			}
			else{
				cout<<1<<endl;
			}
		}
		else{
		    
			ans+=2*steps;
			diff = (m+n)-2*(1+steps);
			if(diff%2 == 0){
				ans+=(2*diff);
			}
			else{
				ans+=(2*diff-1);
			}

			cout<<ans<<endl;
		}
	}

#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}