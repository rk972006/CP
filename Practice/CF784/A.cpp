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
	int t;cin>>t;
	while(t--){
		ll n;
		cin>>n;

		if(n<=1399){
			cout<<"Division 4"<<endl;
		}
		else if(n<= 1599 && n>= 1400){
			cout<<"Division 3"<<endl;

		}
		else if(n>=1600 && n<=1899){
			cout<<"Division 2"<<endl;
		}
		else{
			cout<<"Division 1"<<endl;
		}
	}

#ifndef ONLINE_JUDGE
   freopen( "input.txt" , "r", stdin);
   freopen("output.txt" , "w", stdout);
#endif
 return 0;
}